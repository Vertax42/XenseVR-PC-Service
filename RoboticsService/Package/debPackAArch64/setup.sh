#!/bin/bash
echo "开始为ARM64架构构建增量包..."
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
echo $DIR

# 只在必要时创建目录结构
if [ ! -d "$DIR/package_arm64" ]; then
    echo "创建目录结构..."
    mkdir -p $DIR/package_arm64/opt/apps/roboticsservice
    mkdir -p $DIR/package_arm64/usr/share/applications
    mkdir -p $DIR/package_arm64/usr/share/icons
    mkdir -p $DIR/package_arm64/DEBIAN
    echo "目录结构已创建。"
else
    echo "使用现有目录结构。"
fi

# 检查控制文件是否已复制
if [ ! -f "$DIR/package_arm64/DEBIAN/control" ]; then
    echo "复制控制文件..."
    cp $DIR/control $DIR/package_arm64/DEBIAN/control
    cp $DIR/postinst $DIR/package_arm64/DEBIAN/
    cp $DIR/postrm $DIR/package_arm64/DEBIAN/
    cp $DIR/prerm $DIR/package_arm64/DEBIAN/
    # 确保脚本有执行权限
    chmod +x $DIR/package_arm64/DEBIAN/postinst
    chmod +x $DIR/package_arm64/DEBIAN/postrm
    chmod +x $DIR/package_arm64/DEBIAN/prerm
    echo "控制文件已复制。"
else
    echo "控制文件已存在，检查更新..."
    # 检查控制文件是否有更新
    if [ "$DIR/control" -nt "$DIR/package_arm64/DEBIAN/control" ]; then
        echo "更新控制文件..."
        cp $DIR/control $DIR/package_arm64/DEBIAN/control
    fi
    if [ "$DIR/postinst" -nt "$DIR/package_arm64/DEBIAN/postinst" ]; then
        echo "更新postinst脚本..."
        cp $DIR/postinst $DIR/package_arm64/DEBIAN/
        chmod +x $DIR/package_arm64/DEBIAN/postinst
    fi
    if [ "$DIR/postrm" -nt "$DIR/package_arm64/DEBIAN/postrm" ]; then
        echo "更新postrm脚本..."
        cp $DIR/postrm $DIR/package_arm64/DEBIAN/
        chmod +x $DIR/package_arm64/DEBIAN/postrm
    fi
    if [ "$DIR/prerm" -nt "$DIR/package_arm64/DEBIAN/prerm" ]; then
        echo "更新prerm脚本..."
        cp $DIR/prerm $DIR/package_arm64/DEBIAN/
        chmod +x $DIR/package_arm64/DEBIAN/prerm
    fi
fi

# 检查桌面文件是否已复制或有更新
if [ ! -f "$DIR/package_arm64/usr/share/applications/roboticsservice.desktop" ] || [ "$DIR/roboticsservice.desktop" -nt "$DIR/package_arm64/usr/share/applications/roboticsservice.desktop" ]; then
    echo "复制/更新桌面文件..."
    # 直接复制桌面文件，不修改Exec条目
    cp $DIR/roboticsservice.desktop $DIR/package_arm64/usr/share/applications/
    echo "桌面文件已复制/更新。"
fi

# 检查图标是否已复制
if [ ! -d "$DIR/package_arm64/usr/share/icons/hicolor" ] || [ "$DIR/hicolor" -nt "$DIR/package_arm64/usr/share/icons/hicolor" ]; then
    echo "复制/更新图标..."
    cp -rf $DIR/hicolor $DIR/package_arm64/usr/share/icons/
    echo "图标已复制/更新。"
fi

# 检查脚本文件是否已复制或有更新
for script in run2D.sh runRobotDataRecorder.sh runService.sh; do
    if [ ! -f "$DIR/package_arm64/opt/apps/roboticsservice/$script" ] || [ "$DIR/$script" -nt "$DIR/package_arm64/opt/apps/roboticsservice/$script" ]; then
        echo "复制/更新 $script..."
        cp $DIR/$script $DIR/package_arm64/opt/apps/roboticsservice/
        # 确保脚本有执行权限
        chmod +x $DIR/package_arm64/opt/apps/roboticsservice/$script
        echo "$script 已复制/更新。"
    fi
done

# 检查二进制文件是否需要更新
BIN_DIR="$DIR/../../bin"
TARGET_DIR="$DIR/package_arm64/opt/apps/roboticsservice"

link_if_same() {
    local link_path="$1"
    local target_name="$2"
    local target_path

    target_path="$(dirname "$link_path")/$target_name"

    if [ ! -f "$link_path" ] || [ -L "$link_path" ]; then
        return 0
    fi

    if [ ! -f "$target_path" ]; then
        return 0
    fi

    if ! cmp -s "$link_path" "$target_path"; then
        return 0
    fi

    rm -f "$link_path"
    ln -s "$target_name" "$link_path"
}

normalize_shared_library_links() {
    local root_dir="$1"
    local versioned_path base_name unversioned soname major_version

    while IFS= read -r versioned_path; do
        base_name="$(basename "$versioned_path")"

        if [[ "$base_name" =~ ^(.+\.so)\.([0-9]+)(\..+)$ ]]; then
            unversioned="${BASH_REMATCH[1]}"
            major_version="${BASH_REMATCH[2]}"
            soname="${unversioned}.${major_version}"

            link_if_same "$(dirname "$versioned_path")/$soname" "$base_name"
            link_if_same "$(dirname "$versioned_path")/$unversioned" "$soname"
        elif [[ "$base_name" =~ ^(.+\.so)\.([0-9]+)$ ]]; then
            unversioned="${BASH_REMATCH[1]}"
            link_if_same "$(dirname "$versioned_path")/$unversioned" "$base_name"
        fi
    done < <(find "$root_dir" -type f -name '*.so.*' | sort -V)
}

if [ ! -d "$BIN_DIR" ]; then
    echo "错误：未找到构建输出目录 $BIN_DIR"
    echo "请先执行 RoboticsService/qt-gcc_aarch64.sh 完成 ARM64 构建。"
    exit 1
fi

if [ ! -f "$BIN_DIR/RoboticsServiceProcess" ]; then
    echo "错误：未找到 $BIN_DIR/RoboticsServiceProcess"
    echo "当前无法生成可用的 ARM64 Debian 包。"
    exit 1
fi

# 始终复制二进制文件，确保包含最新的可执行文件
echo "复制二进制文件..."
# 确保目标目录存在
mkdir -p $TARGET_DIR
# 复制所有二进制文件和依赖项
cp -rf $BIN_DIR/* $TARGET_DIR/
# 确保主可执行文件存在并有执行权限
if [ -f "$BIN_DIR/RoboticsServiceProcess" ]; then
    cp -f $BIN_DIR/RoboticsServiceProcess $TARGET_DIR/
    chmod +x $TARGET_DIR/RoboticsServiceProcess
    echo "主可执行文件 RoboticsServiceProcess 已复制并设置为可执行。"
else
    echo "警告：在 $BIN_DIR 中未找到主可执行文件 RoboticsServiceProcess！"
fi
echo "二进制文件已复制。"

echo "清理非运行时调试插件..."
find "$TARGET_DIR" -type f -name '*.debug' -delete

echo "标准化共享库符号链接..."
normalize_shared_library_links "$TARGET_DIR"

# 构建 Debian 包
echo "构建 Debian 包..."
VERSION=$(grep "^Version:" "$DIR/control" | awk '{print $2}')
PACKAGE_NAME="XenseVR-PC-Service_${VERSION}_arm64.deb"
PACKAGE_PATH="$DIR/$PACKAGE_NAME"
MANUAL_TMP_DIR="$DIR/.deb_build_tmp"

validate_deb_package() {
    local package_path="$1"

    if [ ! -f "$package_path" ]; then
        return 1
    fi

    local archive_listing
    archive_listing=$(ar t "$package_path" 2>/dev/null) || return 1
    echo "$archive_listing" | grep -q "^debian-binary$" || return 1
    echo "$archive_listing" | grep -q "^control\.tar\." || return 1
    echo "$archive_listing" | grep -q "^data\.tar\." || return 1

    timeout 10 dpkg-deb -I "$package_path" >/dev/null 2>&1 || return 1
    timeout 10 dpkg-deb -c "$package_path" >/dev/null 2>&1 || return 1

    return 0
}

build_deb_manually() {
    local package_path="$1"

    echo "使用 tar + ar 手动构建 Debian 包..."
    rm -rf "$MANUAL_TMP_DIR"
    mkdir -p "$MANUAL_TMP_DIR"

    printf '2.0\n' > "$MANUAL_TMP_DIR/debian-binary"
    tar --zstd --owner=0 --group=0 --numeric-owner \
        -cf "$MANUAL_TMP_DIR/control.tar.zst" \
        -C "$DIR/package_arm64/DEBIAN" .
    tar --zstd --owner=0 --group=0 --numeric-owner \
        --exclude=./DEBIAN \
        -cf "$MANUAL_TMP_DIR/data.tar.zst" \
        -C "$DIR/package_arm64" .

    rm -f "$package_path"
    ar r "$package_path" \
        "$MANUAL_TMP_DIR/debian-binary" \
        "$MANUAL_TMP_DIR/control.tar.zst" \
        "$MANUAL_TMP_DIR/data.tar.zst"
}

rm -f "$PACKAGE_PATH"
cd "$DIR"

build_deb_manually "$PACKAGE_PATH"

if ! validate_deb_package "$PACKAGE_PATH"; then
    echo "错误：Debian 包构建失败，产物校验未通过。"
    exit 1
fi

echo "Debian 包已构建: $PACKAGE_NAME"

# 确保输出目录存在
mkdir -p $DIR/../output

# 复制 Debian 包到输出目录
echo "复制包到输出目录..."
cp "$PACKAGE_PATH" "$DIR/../output/"
echo "包已复制到输出目录。"

# 清理临时文件
rm -f "$PACKAGE_PATH"
rm -rf "$MANUAL_TMP_DIR"
echo "临时文件已清理。"

echo "ARM64架构的增量包构建已成功完成。"
