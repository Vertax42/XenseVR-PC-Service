# ARM64 Installation And Build Notes

This document records the full ARM64 bring-up that was completed on this repository on an `aarch64` Ubuntu machine.

## Goal

Build:

```text
XenseVR-PC-Service_0.1.0_arm64.deb
```

from this repository on ARM64, using a local Qt installation under `~/Qt`.

## Environment Used

- OS: Ubuntu 22.04 on `aarch64`
- Repository root: `/home/firefly/XenseVR-PC-Service`
- Qt root: `/home/firefly/Qt`
- Qt runtime selected by the scripts: `/home/firefly/Qt/6.7.3/gcc_arm64`

## Problems Found Initially

1. ARM build scripts were hard-coded to an old Qt path under `/media/...`.
2. The ARM package metadata still described an old package name/version.
3. The ARM Debian pack script could create a truncated package with `dpkg-deb -b` on this machine.
4. The ARM gRPC/protobuf vendor directory was empty.
5. The checked-in ARM protobuf-generated files require protobuf C++ `5.27.2`, so Ubuntu `apt` protobuf/grpc packages are too old for the existing generated code.

## Repository Changes Made

### 1. Qt path handling

Added a shared ARM64 Qt environment helper:

- `RoboticsService/qt-env-aarch64.sh`

Updated these scripts to use the helper instead of the old `/media/...` path:

- `RoboticsService/qt-gcc_aarch64.sh`
- `RoboticsService/PXREARobotSDK/build_aarch64.sh`
- `RoboticsService/SDKDemo/CppSrc/ConsoleDemo/build_aarch64.sh`
- `RoboticsService/SDKDemo/CppSrc/RobotDataRecorder/build_aarch64.sh`
- `RoboticsService/SDKDemo/CppSrc/RobotDemoQt/build_aarch64.sh`

Behavior:

- Prefer `QT_GCC_ARM64` if already set.
- Otherwise prefer `QT_PATH` if already set.
- Otherwise scan `~/Qt` and pick the newest `gcc_arm64` directory.

### 2. ARM packaging metadata

Updated:

- `RoboticsService/Package/debPackAArch64/control`

Final package metadata:

- Package: `xensevr-pc-service`
- Version: `0.1.0`
- Architecture: `arm64`

### 3. ARM Debian packaging reliability

Updated:

- `RoboticsService/Package/debPackAArch64/setup.sh`

Changes:

- stop copying non-existent launcher names from the package directory
- fail early if `RoboticsServiceProcess` has not been built
- build the `.deb` using a reliable `tar --zstd` + `ar` flow
- validate the final archive before copying it to `Package/output`

This change was needed because `dpkg-deb -b` on this ARM machine produced an invalid archive containing only:

```text
debian-binary
control.tar.zst
```

and no `data.tar.*`.

### 4. Qt runtime copy in the main service build

Updated:

- `RoboticsService/RoboticsServiceProcess/CMakeLists.txt`

Changes:

- removed hard-coded Qt `6.6.2` filenames
- copy Qt runtime libraries with globbing so newer Qt versions such as `6.7.3` work without further edits

### 5. ARM SDK install path fix

Updated:

- `RoboticsService/PXREARobotSDK/CMakeLists.txt`
- `RoboticsService/PXREARobotSDK/build_aarch64.sh`

Changes:

- ensure the install directory exists before copying outputs
- install ARM SDK output into `RoboticsService/SDK/linux_aarch64/64`
- also copy the ARM SDK library/header into `RoboticsService/Redistributable/linux_aarch64/SDK/clientso/64` for compatibility with existing layout

## gRPC / Protobuf Version Matching

The checked-in ARM protobuf-generated files under:

```text
RoboticsService/PXREAService/linux_aarch64
```

require protobuf C++ `5.27.2`.

That is why Ubuntu packages such as:

- `protobuf-compiler`
- `libprotobuf-dev`
- `libgrpc++-dev`

were not used for the final fix.

Instead, gRPC was built from source at tag:

```text
v1.67.1
```

This tag vendors protobuf release `27.2`, whose C++ runtime version is `5.27.2`, which matches the generated ARM files already in this repository.

## Packages Needed From Apt

These were used only as build prerequisites:

```bash
sudo apt install -y build-essential cmake ninja-build git autoconf libtool pkg-config
```

## Build gRPC / Protobuf From Source

Source checkout and install prefix used during the successful build:

- source: `/tmp/grpc-v1.67.1`
- install prefix: `/tmp/grpc-arm64-install`

Commands:

```bash
cd /tmp
git clone --recurse-submodules -b v1.67.1 --depth 1 --shallow-submodules https://github.com/grpc/grpc grpc-v1.67.1

cd /tmp/grpc-v1.67.1
mkdir -p cmake/build
cd cmake/build

cmake -DgRPC_INSTALL=ON \
      -DgRPC_BUILD_TESTS=OFF \
      -DCMAKE_CXX_STANDARD=17 \
      -DBUILD_SHARED_LIBS=OFF \
      -DCMAKE_BUILD_TYPE=Release \
      -DCMAKE_INSTALL_PREFIX=/tmp/grpc-arm64-install \
      ../..

cmake --build . -j"$(nproc)"
cmake --install .
```

Version verification used:

```bash
sed -n '1,80p' /tmp/grpc-v1.67.1/third_party/protobuf/version.json
```

Expected values:

```json
{
  "protoc_version": "27.2",
  "cpp": "5.27.2"
}
```

## Copy ARM gRPC / Protobuf Into The Repository

Repository vendor target:

```text
RoboticsService/Redistributable/linux_aarch64/grpc
```

Copied items:

- headers from `/tmp/grpc-arm64-install/include`
- libraries from `/tmp/grpc-arm64-install/lib`
- `protoc` and `grpc_cpp_plugin` from `/tmp/grpc-arm64-install/bin`
- OpenSSL headers from gRPC's bundled BoringSSL source tree

Commands used:

```bash
mkdir -p /home/firefly/XenseVR-PC-Service/RoboticsService/Redistributable/linux_aarch64/grpc/include
mkdir -p /home/firefly/XenseVR-PC-Service/RoboticsService/Redistributable/linux_aarch64/grpc/lib
mkdir -p /home/firefly/XenseVR-PC-Service/RoboticsService/Redistributable/linux_aarch64/grpc/bin

rsync -a /tmp/grpc-arm64-install/include/ /home/firefly/XenseVR-PC-Service/RoboticsService/Redistributable/linux_aarch64/grpc/include/
rsync -a /tmp/grpc-arm64-install/lib/ /home/firefly/XenseVR-PC-Service/RoboticsService/Redistributable/linux_aarch64/grpc/lib/
cp -a /tmp/grpc-arm64-install/bin/protoc /home/firefly/XenseVR-PC-Service/RoboticsService/Redistributable/linux_aarch64/grpc/bin/
cp -a /tmp/grpc-arm64-install/bin/grpc_cpp_plugin /home/firefly/XenseVR-PC-Service/RoboticsService/Redistributable/linux_aarch64/grpc/bin/
cp -a /tmp/grpc-v1.67.1/third_party/boringssl-with-bazel/src/include/openssl /home/firefly/XenseVR-PC-Service/RoboticsService/Redistributable/linux_aarch64/grpc/include/
```

The resulting ARM vendor bundle contains the protobuf/grpc headers and static libraries expected by this repository, including `libprotobuf.a`, `libgrpc++.a`, `libgrpc.a`, `libgpr.a`, `libupb.a`, `libaddress_sorting.a`, `libutf8_range.a`, `libutf8_validity.a`, and the required `libabsl_*.a` archives.

## Build Steps That Succeeded

### 1. Build the ARM SDK

```bash
cd /home/firefly/XenseVR-PC-Service/RoboticsService/PXREARobotSDK
bash ./build_aarch64.sh --clean
```

Expected output artifacts:

- `RoboticsService/SDK/linux_aarch64/64/libPXREARobotSDK.so`
- `RoboticsService/SDK/linux_aarch64/64/PXREARobotSDK.h`

### 2. Build the main ARM service

```bash
cd /home/firefly/XenseVR-PC-Service/RoboticsService
bash ./qt-gcc_aarch64.sh --clean
```

Successful result:

- `RoboticsService/bin/RoboticsServiceProcess`

### 3. Build the ARM Debian package

```bash
cd /home/firefly/XenseVR-PC-Service/RoboticsService/Package/debPackAArch64
bash ./setup.sh
```

Successful result:

- `RoboticsService/Package/output/XenseVR-PC-Service_0.1.0_arm64.deb`

## Verification Commands

The final package was verified with:

```bash
ar t /home/firefly/XenseVR-PC-Service/RoboticsService/Package/output/XenseVR-PC-Service_0.1.0_arm64.deb
dpkg-deb -I /home/firefly/XenseVR-PC-Service/RoboticsService/Package/output/XenseVR-PC-Service_0.1.0_arm64.deb
dpkg-deb -c /home/firefly/XenseVR-PC-Service/RoboticsService/Package/output/XenseVR-PC-Service_0.1.0_arm64.deb
```

Expected archive members:

```text
debian-binary
control.tar.zst
data.tar.zst
```

## Final Rebuild Flow

For a future rebuild on another ARM64 Ubuntu machine:

```bash
cd /home/firefly/XenseVR-PC-Service/RoboticsService/PXREARobotSDK
bash ./build_aarch64.sh --clean

cd /home/firefly/XenseVR-PC-Service/RoboticsService
bash ./qt-gcc_aarch64.sh --clean

cd /home/firefly/XenseVR-PC-Service/RoboticsService/Package/debPackAArch64
bash ./setup.sh
```

## Notes

- Qt must be installed locally under `~/Qt`, or `QT_GCC_ARM64` must point to the ARM Qt directory directly.
- The ARM gRPC/protobuf bundle in `RoboticsService/Redistributable/linux_aarch64/grpc` is now the expected local dependency for this repository.
- The package staging directory and generated `.deb` files are local build outputs and are intentionally ignored by git.
