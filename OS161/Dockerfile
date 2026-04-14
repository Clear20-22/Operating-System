FROM --platform=linux/amd64 ubuntu:14.04 AS builder

ENV DEBIAN_FRONTEND=noninteractive
ENV HOME=/root
ENV OS161_HOME=/root/sys161
ENV TOOLDIR=/root/sys161/tools
ENV PATH=/root/sys161/bin:/root/sys161/tools/bin:$PATH
ENV MAKESYSPATH=/root/sys161/tools/share/mk

# Install build dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential g++ make bison flex texinfo \
    libncurses5-dev zlib1g-dev gawk \
    ca-certificates perl python \
    file patch \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workspace

# Copy all tar archives
COPY *.tar /workspace/

# Extract all archives
RUN tar -xf os161-binutils.tar && \
    tar -xf os161-gcc.tar && \
    tar -xf os161-gdb.tar && \
    tar -xf os161-bmake.tar && \
    tar -xf os161-mk.tar && \
    tar -xf sys161-1.99.06-no-hang.tar && \
    tar -xf os161-1.99.05-UWF16.tar

# Create directories
RUN mkdir -p "$OS161_HOME/tools" "$OS161_HOME/bin"

# Step 2: Build and Install Binutils
RUN cd /workspace/binutils-2.17+os161-2.0.1 && \
    ./configure --nfp --disable-werror \
    --build=x86_64-unknown-linux-gnu --host=x86_64-unknown-linux-gnu \
    --target=mips-harvard-os161 --prefix="$TOOLDIR" && \
    make -j$(nproc) all-binutils all-gas all-ld && \
    make install-binutils install-gas install-ld

# Step 4: Build and Install GCC
RUN cd /workspace/gcc-4.1.2+os161-2.0 && \
    ./configure -nfp --disable-shared --disable-threads \
    --disable-libmudflap --disable-libssp \
    --build=x86_64-unknown-linux-gnu --host=x86_64-unknown-linux-gnu \
    --target=mips-harvard-os161 --prefix="$TOOLDIR" && \
    make -j$(nproc) && make install

# Step 5: Build and Install GDB
RUN cd /workspace/gdb-6.6+os161-2.0 && \
    ./configure --target=mips-harvard-os161 \
    --build=x86_64-unknown-linux-gnu --host=x86_64-unknown-linux-gnu \
    --prefix="$TOOLDIR" --disable-werror --disable-nls && \
    make -j$(nproc) MAKEINFO=missing all-gdb all-sim all-bfd && \
    make install-gdb install-sim install-bfd MAKEINFO=missing && \
    mkdir -p "$TOOLDIR/bin" && \
    cp -f gdb/gdb "$TOOLDIR/bin/mips-harvard-os161-gdb" && \
    [ -f gdb/gdbtui ] && cp -f gdb/gdbtui "$TOOLDIR/bin/mips-harvard-os161-gdbtui" || true

# Step 6: Install bmake
RUN cd /workspace/bmake && \
    cp -R /workspace/mk ./mk && \
    ./boot-strap --prefix="$TOOLDIR" && \
    mkdir -p "$TOOLDIR/bin" "$TOOLDIR/share/man/cat1" "$TOOLDIR/share" && \
    cp Linux/bmake "$TOOLDIR/bin/" && \
    cp bmake.cat1 "$TOOLDIR/share/man/cat1/bmake.1" && \
    sh ./mk/install-mk "$TOOLDIR/share/mk" && \
    ln -sf "$TOOLDIR/bin/bmake" "$OS161_HOME/bin/bmake"

# Step 7: Set Up Links for Toolchain Binaries
RUN cd "$TOOLDIR/bin" && \
    sh -c 'for i in mips-*; do ln -sf "$TOOLDIR/bin/$i" "$OS161_HOME/bin/cs350-`echo $i | cut -d- -f4-`"; done' && \
    ln -sf "$TOOLDIR/bin/bmake" "$OS161_HOME/bin/bmake"

# Step 8: Build and Install sys161 Simulator
RUN cd /workspace/sys161-1.99.06 && \
    ./configure --prefix="$OS161_HOME" mipseb && \
    make -j$(nproc) && make install && \
    cd "$OS161_HOME" && \
    ln -sf share/examples/sys161/sys161.conf.sample sys161.conf

# Step 9: Install OS/161 source
RUN mkdir -p /root/cs350-os161 && \
    cp -R /workspace/os161-1.99 /root/cs350-os161/

# Step 10: Create directory for learning programs
RUN mkdir -p /root/learning-programs

# Strip binaries to reduce size
RUN find "$OS161_HOME" "$TOOLDIR" -type f -executable \( -name "mips-*" -o -name "bmake" -o -name "sys161*" -o -name "gdb*" -o -name "hub161*" -o -name "stat161*" -o -name "trace161*" \) \
    -exec strip --strip-unneeded {} + 2>/dev/null || true

# Stage 2: Runtime - minimal image
FROM --platform=linux/amd64 ubuntu:14.04

ENV DEBIAN_FRONTEND=noninteractive
ENV HOME=/root
ENV OS161_HOME=/root/sys161
ENV TOOLDIR=/root/sys161/tools
ENV PATH=/root/sys161/bin:/root/sys161/tools/bin:$PATH
ENV MAKESYSPATH=/root/sys161/tools/share/mk

# Install runtime dependencies including build-essential for hostcompat compilation
RUN apt-get update && apt-get install -y --no-install-recommends \
    libncurses5 zlib1g gawk ca-certificates \
    perl python vim nano \
    build-essential gcc g++ \
    libreadline-dev \
    && rm -rf /var/lib/apt/lists/*

# Copy compiled toolchain and OS/161 source from builder
COPY --from=builder /root/sys161 /root/sys161
COPY --from=builder /root/cs350-os161 /root/cs350-os161
COPY --from=builder /root/learning-programs /root/learning-programs

WORKDIR /root/cs350-os161
CMD ["/bin/bash"]
