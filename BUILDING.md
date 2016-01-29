Building HST
============

HST requires BoringSSL, LibreSSL, and OpenSSL to be built in their respective
subdirectories.

Building HST will also build the examples. Instructions for how running the
examples are also documented here.

## Building dependencies

First, each of the dependencies must be built.

Building each of the dependencies is fairly straightforward and well documented
within each of their respective documentation.

```bash
git submodule update --init
pushd boringssl
mkdir build
pushd build
cmake ..
popd
popd

pushd libressl
./autogen
mkdir build
pushd build
cmake ..
popd
popd

pushd openssl
./config
make
popd

```

## Building HST

Next up, it's time to build the hst to each of the projects. It is required that
this directory structure is kept, as we cannot rely on the installation settings
for OpenSSL, BoringSSL, nor LibreSSL.

```bash
pushd hst/build
cmake ..
make -j 4
popd
```

## Running the examples

Examples can be run by running the following:

```bash
pushd hst/build
./bin/init # Will output 0
LD_PRELOAD=lib/libhstboring.so ./bin/init # Will output 1
LD_PRELOAD=lib/libhstlibre.so ./bin/init  # Will output 2
LD_PRELOAD=lib/libhstopen.so ./bin/init   # Will output 3
popd
```
