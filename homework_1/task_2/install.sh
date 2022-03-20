#!/bin/bash

if [ -d install ]; then
  rm -rf install
fi
if [ -d build ]; then
  rm -rf build
fi

mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=install ..
make && make install
