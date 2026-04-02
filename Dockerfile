# =============================
# OS/161 Dockerfile
# =============================
# Base image
FROM --platform=linux/amd64 ubuntu:20.04

# Prevent interactive prompts
ENV DEBIAN_FRONTEND=noninteractive

# -----------------------------
# Step 1: Install dependencies
# -----------------------------
RUN apt-get update && apt-get install -y \
    build-essential \
    gcc \
    g++ \
    make \
    bison \
    flex \
    texinfo \
    libncurses-dev \
    libtinfo-dev \
    libgmp-dev \
    libmpfr-dev \
    libmpc-dev \
    zlib1g-dev \
    perl \
    python3 \
    pkg-config \
    wget \
    curl \
    tar \
    gzip \
    git \
    unzip \
    nano \
    vim \
    ca-certificates \
    sudo \
    locales \
 && rm -rf /var/lib/apt/lists/*
# -----------------------------
# Step 2: Set work directory
# -----------------------------
WORKDIR /workspace

# -----------------------------
# Step 3: Create sys161 directories
# -----------------------------
RUN mkdir -p $HOME/sys161/tools \
    && mkdir -p $HOME/sys161/bin

# -----------------------------
# Step 4: Copy OS161 demo files
# -----------------------------
# Replace `Demo_OS/` with your folder name containing binutils, gcc, gdb, bmake, mk, sys161, os161
COPY ./Demo_OS /workspace

# -----------------------------
# Step 5: Build Binutils
# -----------------------------
RUN cd /workspace/binutils-2.17+os161-2.0.1 \
    && ./configure --nfp --disable-werror --target=mips-harvard-os161 --prefix=$HOME/sys161/tools \
    && make && make install

# -----------------------------
# Step 6: Build GCC cross-compiler
# -----------------------------
RUN cd /workspace/gcc-4.1.2+os161-2.0 \
    && ./configure --nfp --disable-shared --disable-threads --disable-libmudflap --disable-libssp \
       --target=mips-harvard-os161 --prefix=$HOME/sys161/tools \
    && make && make install

# -----------------------------
# Step 7: Build GDB
# -----------------------------
RUN cd /workspace/gdb-6.6+os161-2.0 \
    && ./configure --target=mips-harvard-os161 --prefix=$HOME/sys161/tools --disable-werror \
    && make MAKEINFO=missing && make install

# -----------------------------
# Step 8: Build bmake + mk
# -----------------------------
RUN cd /workspace/bmake \
    && tar -xzf ../mk.tar.gz \
    && ./boot-strap --prefix=$HOME/sys161/tools \
    && cp Linux/bmake $HOME/sys161/tools/bin/ \
    && ln -s $HOME/sys161/tools/bin/bmake $HOME/sys161/bin/bmake

# -----------------------------
# Step 9: Set PATH
# -----------------------------
ENV PATH=$HOME/sys161/bin:$HOME/sys161/tools/bin:$PATH

# -----------------------------
# Step 10: Build sys161
# -----------------------------
RUN cd /workspace/sys161-1.99.06 \
    && ./configure --prefix=$HOME/sys161 mipseb \
    && make && make install \
    && cd $HOME/sys161 \
    && ln -s share/examples/sys161/sys161.conf.sample sys161.conf

# -----------------------------
# Step 11: Prepare OS161 source
# -----------------------------
RUN cd /workspace/os161-1.99 \
    && mkdir -p kernels

# -----------------------------
# Step 12: Default command
# -----------------------------
WORKDIR /workspace
CMD ["/bin/bash"]