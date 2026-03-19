#!/bin/bash

setup_qt_arm64_env() {
    local qt_root qt_candidate tools_candidate qt_core_lib

    qt_root="${QT_ROOT:-$HOME/Qt}"

    if [ -n "${QT_GCC_ARM64:-}" ] && [ -d "${QT_GCC_ARM64}" ]; then
        qt_candidate="$QT_GCC_ARM64"
    elif [ -n "${QT_PATH:-}" ] && [ -d "${QT_PATH}" ]; then
        qt_candidate="$QT_PATH"
    elif [ -d "$qt_root" ]; then
        qt_candidate=$(find "$qt_root" -maxdepth 2 -type d -name gcc_arm64 | sort -V | tail -n 1)
    fi

    if [ -z "${qt_candidate:-}" ] || [ ! -d "$qt_candidate" ]; then
        echo "Error: Unable to locate an ARM64 Qt installation." >&2
        echo "Set QT_GCC_ARM64 or QT_ROOT before running this script." >&2
        return 1
    fi

    export QT_GCC_ARM64="$qt_candidate"
    export QT_PATH="$qt_candidate"

    if [ -n "${QT6_TOOLS:-}" ] && [ -d "${QT6_TOOLS}" ]; then
        tools_candidate="$QT6_TOOLS"
    elif [ -d "$qt_root/Tools" ]; then
        tools_candidate="$qt_root/Tools"
    fi

    if [ -n "${tools_candidate:-}" ]; then
        export QT6_TOOLS="$tools_candidate"
    fi

    case ":$PATH:" in
        *":$QT_GCC_ARM64/bin:"*) ;;
        *) export PATH="$QT_GCC_ARM64/bin:$PATH" ;;
    esac

    if [ -d "$QT_GCC_ARM64/include" ]; then
        case ":$PATH:" in
            *":$QT_GCC_ARM64/include:"*) ;;
            *) export PATH="$QT_GCC_ARM64/include:$PATH" ;;
        esac
    fi

    if [ -n "${QT6_TOOLS:-}" ] && [ -d "$QT6_TOOLS/QtCreator/bin" ]; then
        case ":$PATH:" in
            *":$QT6_TOOLS/QtCreator/bin:"*) ;;
            *) export PATH="$QT6_TOOLS/QtCreator/bin:$PATH" ;;
        esac
    fi

    if [ -n "${QT6_TOOLS:-}" ] && [ -d "$QT6_TOOLS/CMake/bin" ]; then
        case ":$PATH:" in
            *":$QT6_TOOLS/CMake/bin:"*) ;;
            *) export PATH="$QT6_TOOLS/CMake/bin:$PATH" ;;
        esac
    fi

    export CMAKE_PREFIX_PATH="$QT_GCC_ARM64${CMAKE_PREFIX_PATH:+:$CMAKE_PREFIX_PATH}"

    qt_core_lib=$(find "$QT_GCC_ARM64/lib" -maxdepth 1 -type f -name 'libQt6Core.so.*' | sort -V | tail -n 1)
    if [ -n "${qt_core_lib:-}" ]; then
        echo "Using Qt for ARM64 from: $QT_GCC_ARM64 ($(basename "$qt_core_lib"))"
    else
        echo "Using Qt for ARM64 from: $QT_GCC_ARM64"
    fi
}
