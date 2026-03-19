#!/bin/bash
# Handle arguments
BUILD_NUM="1000"  # Default build number
CLEAN_FLAG=false
OVERSEAS_FLAG=false

# Parse arguments
for arg in "$@"; do
    if [ "$arg" = "--clean" ]; then
        CLEAN_FLAG=true
    elif [ "$arg" = "overseas" ]; then
        OVERSEAS_FLAG=true
    elif [[ "$arg" =~ ^[0-9]+$ ]]; then
        # If argument is a number, use it as build number
        BUILD_NUM="$arg"
    fi
done

echo "Build number: $BUILD_NUM"
if [ "$CLEAN_FLAG" = true ]; then
    echo "Clean flag: enabled"
fi
if [ "$OVERSEAS_FLAG" = true ]; then
    echo "Overseas flag: enabled"
fi

echo "set qt gcc compile env parameter for ARM64 architecture..."
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
# shellcheck source=./qt-env-aarch64.sh
source "$DIR/qt-env-aarch64.sh"
setup_qt_arm64_env || exit 1
echo "set qt gcc compile env parameter finished."

cd $DIR

PROJECT_DIR=$DIR
RELEASE_DIR=$DIR/RelWithDebInfo

# Create directories if they don't exist (but don't delete if they do)
BinDir="$DIR/bin"
if [ ! -d "$BinDir" ]; then
    mkdir bin
fi

# Create lib directory for Qt libraries
LibDir="$DIR/bin/lib"
if [ ! -d "$LibDir" ]; then
    mkdir -p "$LibDir"
fi

if [ ! -d "$RELEASE_DIR" ]; then
    mkdir RelWithDebInfo
fi

# Check Qt version
QT_CORE_LIB=$(find "$QT_GCC_ARM64/lib" -maxdepth 1 -type f -name 'libQt6Core.so.*' | sort -V | tail -n 1)
if [ -n "$QT_CORE_LIB" ]; then
    echo "Found Qt runtime: $(basename "$QT_CORE_LIB")"
else
    echo "Warning: Qt runtime libraries not found at $QT_GCC_ARM64"
fi

# Only configure if CMakeCache.txt doesn't exist or --clean flag is provided
if [ ! -f "$RELEASE_DIR/CMakeCache.txt" ] || [ "$CLEAN_FLAG" = true ]; then
    echo "Running CMake configuration..."

    # If --clean flag is provided, remove directories and recreate them
    if [ "$CLEAN_FLAG" = true ]; then
        echo "Cleaning build directories..."
        rm -rf bin
        mkdir bin
        mkdir -p bin/lib
        rm -rf RelWithDebInfo
        mkdir RelWithDebInfo
    fi

    if [ "$OVERSEAS_FLAG" = true ]; then
        cmake -S $PROJECT_DIR -B $RELEASE_DIR -DBUILD_LIB_PATH:STRING=$QT_GCC_ARM64 -DAUTO_BUILD_NUM:STRING=$BUILD_NUM -DCMAKE_BUILD_TYPE:STRING=RelWithDebInfo -DCMAKE_PREFIX_PATH:PATH=$QT_GCC_ARM64 -DAUTO_BUILD_OVERSEA=ON
    else
        cmake -S $PROJECT_DIR -B $RELEASE_DIR -DBUILD_LIB_PATH:STRING=$QT_GCC_ARM64 -DAUTO_BUILD_NUM:STRING=$BUILD_NUM -DCMAKE_BUILD_TYPE:STRING=RelWithDebInfo -DCMAKE_PREFIX_PATH:PATH=$QT_GCC_ARM64
    fi
fi

# Always build
echo "Building..."
cmake --build $RELEASE_DIR --target all

echo "Build completed."
