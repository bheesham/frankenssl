Building HST
============

HST requires BoringSSL, LibreSSL, and OpenSSL to be built in their respective
subdirectories.

Building HST will also build the examples. Instructions for how running the
examples are also documented here.

## Building dependencies

First, each of the dependencies must be built with symbol versioning enabled.
OpenSSL, by default, will export symbol versions. LibreSSL and BoringSSL do not.

Building each of the dependencies is fairly straightforward and well documented
within each of their respective documentation.

```bash
git submodule update --init
pushd boringssl
mkdir build
pushd build
cmake .. -DBUILD_SHARED_LIBS=on \
         -DCMAKE_C_FLAGS="-fvisibility=default -Wl,--version-script=`pwd`/../symbols.map"
make
popd
popd

pushd libressl
./autogen
LDFLAGS=-Wl,--version-script=`pwd`/symbols.map ./configure
make
popd

pushd openssl
./config shared
make depend
make
popd
```

## Building HST

Next up, it's time to build the hst to each of the projects. It is required that
this directory structure is kept, as we cannot rely on the installation settings
for OpenSSL, BoringSSL, nor LibreSSL.

You have the option to add verbosity to the library, which will print which
implementation of a specified function to `stdout`. Simply add `-D__HST=on` as a
flag to CMake.

```bash
pushd libhst/build
cmake ..
make
popd
```

## Running the examples

Examples can be run by running the following:

```bash
pushd libhst/build

# Take a look at all the linked libraries.
LD_PRELOAD="lib/libhstopen_init.so lib/libhstlibre_deinit.so lib/libhstopen_version.so" ldd ./bin/init

# init using OpenSSL, deinit using LibreSSL, and lie to the client to say we're
# using OpenSSL.
LD_PRELOAD="lib/libhstopen_init.so lib/libhstlibre_deinit.so lib/libhstopen_version.so" ./bin/init
```
