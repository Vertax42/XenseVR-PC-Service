#!/bin/bash

# Parse BUILD_NUM - exclude --clean and overseas from being used as version number
BUILD_NUM=""
for arg in "$@"; do
    if [ "$arg" != "--clean" ] && [ "$arg" != "overseas" ]; then
        BUILD_NUM=$arg
        break
    fi
done

# Default to empty if no valid build number provided
echo "BUILD_NUM: $BUILD_NUM"

echo "set qt gcc compile env parameter..."
################################################################################
################################################################################
# Set the path to your Qt installation for GCC 64-bit architecture
QT_GCC_64=/home/ubuntu/Qt/6.6.3/gcc_64/
export QT6_TOOLS=/home/ubuntu/Qt/Tools

export PATH=/home/ubuntu/Qt/6.6.3/gcc_64/bin:$PATH
export PATH=/home/ubuntu/Qt/6.6.3/gcc_64/include:$PATH
export PATH=/home/ubuntu/Qt/Tools/QtCreator/bin:$PATH
export PATH=/home/ubuntu/Qt/Tools/CMake/bin:$PATH
#################################################################################
################################################################################

echo "set qt gcc compile env parameter finished."
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
cd $DIR

PROJECT_DIR=$DIR
RELEASE_DIR=$DIR/RelWithDebInfo

# Create directories if they don't exist (but don't delete if they do)
BinDir="$DIR/bin"
if [ ! -d "$BinDir" ]; then
    mkdir bin
fi

if [ ! -d "$RELEASE_DIR" ]; then
    mkdir RelWithDebInfo
fi

# Only configure if CMakeCache.txt doesn't exist or --clean flag is provided
if [ ! -f "$RELEASE_DIR/CMakeCache.txt" ] || [ "$2" = "--clean" ] || [ "$1" = "--clean" ]; then
    echo "Running CMake configuration..."

    # If --clean flag is provided, remove directories and recreate them
    if [ "$2" = "--clean" ] || [ "$1" = "--clean" ]; then
        echo "Cleaning build directories..."
        rm -rf bin
        mkdir bin
        rm -rf RelWithDebInfo
        mkdir RelWithDebInfo
        echo "Clean completed."
        exit 0
    fi

    if [ "$1" = "overseas" ]; then
        cmake -S $PROJECT_DIR -B $RELEASE_DIR -DBUILD_LIB_PATH:STRING=$QT_GCC_64 -DAUTO_BUILD_NUM:STRING=$BUILD_NUM -DCMAKE_BUILD_TYPE:STRING=RelWithDebInfo -DCMAKE_PREFIX_PATH:PATH=$QT_GCC_64 -DAUTO_BUILD_OVERSEA=ON
    else
        cmake -S $PROJECT_DIR -B $RELEASE_DIR -DBUILD_LIB_PATH:STRING=$QT_GCC_64 -DAUTO_BUILD_NUM:STRING=$BUILD_NUM -DCMAKE_BUILD_TYPE:STRING=RelWithDebInfo -DCMAKE_PREFIX_PATH:PATH=$QT_GCC_64
    fi
fi

# Always build
echo "Building..."
cmake --build $RELEASE_DIR --target all

echo "Build completed."
