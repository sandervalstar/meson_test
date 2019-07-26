#-------------------------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See https://go.microsoft.com/fwlink/?linkid=2090316 for license information.
#-------------------------------------------------------------------------------------------------------------

FROM debian:10

# Avoid warnings by switching to noninteractive
ENV DEBIAN_FRONTEND=noninteractive

# Configure apt and install packages
RUN apt-get update \
    && apt-get -y install --no-install-recommends apt-utils=1.8.2 2>&1 \
    # 
    # Verify git, process tools, lsb-release (useful for CLI installs) installed
    && apt-get -y install git=1:2.20.1-2 procps=2:3.3.15-2 lsb-release=10.2019051400 \
    #
    # Install C++ tools
    && apt-get -y install build-essential=12.6 cmake=3.13.4-1 cppcheck=1.86-1 valgrind=1:3.14.0-3 \
    #
    # Install pip
    && apt-get -y install python3-pip=18.1-5 \
    #
    # Install clang
    && apt-get -y install clang=1:7.0-47 clang-tools=1:7.0-47 clang-tidy=1:7.0-47 clang-format=1:7.0-47 \
    # 
    # Install VSCode C/C++ extension's autoformat dependencies
    && apt-get -y install libtinfo5 \
    #
    # Install meson tools
    && pip3 install meson==0.51.1 \
    && pip3 install ninja==1.9.0.post1 \
    && pip3 install lxml==4.3.4 \
    #
    # Install lcov 1.14-1 (1.13-4 has bug in total no. functions)
    && echo 'deb http://ftp.de.debian.org/debian sid main' >> /etc/apt/sources.list \
    && apt-get update \
    && apt-get -y install lcov=1.14-1 \
    #
    # Clean up
    && apt-get autoremove -y \
    && apt-get clean -y \
    && rm -rf /var/lib/apt/lists/*

# Set locale
RUN apt-get update \
    && apt-get -y install locales \
    && sed -i -r 's/# (en_US.UTF-8 UTF-8)/\1/' /etc/locale.gen \ 
    && locale-gen \
    && update-locale LANG=en_US.UTF-8

ENV LANG=en_US.UTF-8 

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=dialog