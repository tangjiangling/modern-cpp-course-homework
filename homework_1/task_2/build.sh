#!/bin/bash

if [ -d ./build ]; then
    rm -rf ./build
fi

mkdir -p build

c++ -c src/subtract.cpp -I./include -o./build/subtract.o
c++ -c src/sum.cpp -I./include -o./build/sum.o
ar rsv build/libipb_arithmetic.a build/subtract.o build/sum.o
cp build/libipb_arithmetic.a results/lib
c++ src/main.cpp -I./include -L./results/lib -lipb_arithmetic -o./results/bin/test_ipb_arithmetic
