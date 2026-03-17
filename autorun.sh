#!/bin/sh

# Clean
rm -rf build_debug

# Configure CMake
cmake -B ./build_debug

# Build
cmake --build ./build_debug

# Run
if [ $? -eq 0 ]; then
    ./build_debug/bin/TP2
else
    exit 1
fi
