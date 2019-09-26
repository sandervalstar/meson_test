#-------------------------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See https://go.microsoft.com/fwlink/?linkid for license information.
#-------------------------------------------------------------------------------------------------------------

FROM centos:7.6.1810

# Make sure manpages will get downloaded
RUN sed -i '/tsflags=nodocs/d' /etc/yum.conf

# Configure apt and install packages
RUN yum -y makecache \
    && yum -y install man man-pages man-db \
    #
    # Install git v2
    && yum -y install  https://centos7.iuscommunity.org/ius-release.rpm \
    && yum -y install  git2u-all \
    #
    # Install C++ tools
    && yum -y install centos-release-scl \
    && yum -y install devtoolset-7-7.1 \
    #
    # Install clang
    && yum -y install llvm-toolset-7-5.0.1 \
    && yum -y install llvm-toolset-7-clang-tools-extra-5.0.1 \
    && yum -y install llvm-toolset-7-clang-analyzer-5.0.1 \
    #
    # Permanently enable toolsets
    && printf "\nsource scl_source enable devtoolset-7 llvm-toolset-7\n\n" >> ~/.bashrc \
    #
    # Install pip
    && yum -y install python3-3.6.8 \
    && yum -y install python3-pip \
    #
    # Install meson tools
    && pip3 install meson==0.51.2 \
    && pip3 install ninja==1.9.0.post1 \
    && pip3 install lxml==4.4.1 \
    && pip3 install pyyaml==5.1.2 \
    #
    # Install epel-release sofware
    && yum -y --enablerepo=extras install epel-release \
    && yum -y install lcov-1.13 \
    && yum -y install cppcheck-1.88

# Fix expected paths for VSCode
    # c_cpp_properties.json -> compilerPath
RUN ln -s /opt/rh/devtoolset-7/root/usr/bin/gdb /usr/bin/gdb \
    # launch.json -> miDebuggerPath
    && ln -s /opt/rh/devtoolset-7/root/usr/bin/c++ /usr/bin/c++
