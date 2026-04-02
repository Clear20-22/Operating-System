FROM ubuntu:14.04

ENV DEBIAN_FRONTEND=noninteractive
ENV OS161_HOME=/root/sys161
ENV TOOLDIR=/root/sys161/tools
ENV PATH=/root/sys161/bin:/root/sys161/tools/bin:$PATH

RUN apt-get update && apt-get install -y \
    build-essential g++ make bison flex texinfo \
    libncurses5-dev zlib1g-dev gawk \
    wget curl ca-certificates perl python \
    file patch vim nano \
 && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace
RUN mkdir -p $OS161_HOME/tools $OS161_HOME/bin

# keep this exactly matching your local directory name
COPY Demo_OS/ /workspace/

# 1) binutils
RUN cd /workspace/binutils-2.17+os161-2.0.1 && \
    ./configure --nfp --disable-werror \
      --target=mips-harvard-os161 --prefix=$TOOLDIR && \
    make -j2 || (find . -name '*.info' | xargs touch && make -j2) && \
    make install

# 2) gcc
RUN cd /workspace/gcc-4.1.2+os161-2.0 && \
    ./configure -nfp --disable-shared --disable-threads \
      --disable-libmudflap --disable-libssp \
      --target=mips-harvard-os161 --prefix=$TOOLDIR && \
    make -j2 && make install

# 3) gdb (no docs/info)
RUN cd /workspace/gdb-6.6+os161-2.0 && \
    ./configure --target=mips-harvard-os161 \
      --prefix=$TOOLDIR --disable-werror --disable-nls && \
    make -j2 MAKEINFO=missing all-gdb all-sim all-bfd && \
    make install-gdb install-sim install-bfd MAKEINFO=missing && \
    mkdir -p $TOOLDIR/bin && \
    cp -f gdb/gdb $TOOLDIR/bin/mips-harvard-os161-gdb && \
    [ -f gdb/gdbtui ] && cp -f gdb/gdbtui $TOOLDIR/bin/mips-harvard-os161-gdbtui || true

# 4) bmake + mk (you have mk directory, not mk.tar.gz)
RUN cd /workspace/bmake && \
    cp -R /workspace/mk ./mk && \
    ./boot-strap --prefix=$TOOLDIR && \
    mkdir -p $TOOLDIR/bin && \
    cp Linux/bmake $TOOLDIR/bin/ && \
    ln -sf $TOOLDIR/bin/bmake $OS161_HOME/bin/bmake

# 5) create cs350-* links exactly like course docs
RUN cd $TOOLDIR/bin && \
    sh -c 'for i in mips-*; do ln -sf $TOOLDIR/bin/$i $OS161_HOME/bin/cs350-`echo $i | cut -d- -f4-`; done' && \
    ln -sf $TOOLDIR/bin/bmake $OS161_HOME/bin/bmake

# 6) sys161
RUN cd /workspace/sys161-1.99.06 && \
    ./configure --prefix=$OS161_HOME mipseb && \
    make -j2 && make install && \
    cd $OS161_HOME && \
    ln -sf share/examples/sys161/sys161.conf.sample sys161.conf

# 7) os161 source workspace
RUN mkdir -p /root/cs350-os161 && \
    cp -R /workspace/os161-1.99 /root/cs350-os161/os161-1.99

WORKDIR /root/cs350-os161
CMD ["/bin/bash"]