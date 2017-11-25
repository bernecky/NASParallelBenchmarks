NAS Parallel Benchmarks
=======================

About
-----

This repository contains the SaC implementation of NASA's *NAS Parallel Benchmark* suite.

We have implementations for the following benchmarks:
- EP - Embarrassingly Parallel
- CG - Conjugate Gradient, irregular memory access and communication
- MG - Multi-Grid on a sequence of meshes, long- and short-distance communication, memory intensive
- FT - discrete 3D fast Fourier Transform, all-to-all communication

> The following are not *yet* implemented
> - IS - Integer Sort, random memory access
> - BT - Block Tri-diagonal solver
> - SP - Scalar Penta-diagonal solver
> - LU - Lower-Upper Gauss-Seidel solver

More information on these benchmarks can be found at https://www.nas.nasa.gov/publications/npb.html

Build
-----

The system uses [CMake][1] (at least version 3.6) to build the project, and depends on the SaC [compiler][2]
and the SaC [standard library][3] being installed.

```sh
$ cd NASParallelBenchmarks
$ git submodule init
$ git submodule update
$ mkdir build
$ cd build
$ cmake ..
$ make -j4
```

**NOTE:** *When pulling the latest commit, remember to run `git submodule update` or you will
be missing changes to the `cmake-common` repository.*

Variables that can be passed to CMake
=====================================

When running CMake it is possible to pass the following variables:
  * `-DTARGETS=x;y;z` --- build stdlib for targets x, y and z. (defaults are `seq; mt_pth`)
  * `-DSAC2C_EXEC=/path/to/sac2c` --- specify `sac2c` executable directly. Otherwise CMake will
    try to find `sac2c` on yout PATH.
  * `-DLINKSETSIZE=n` --- set `-linksetsize n` when calling `sac2c`.  This option is responsible
    for the number of C functions that are put in a single C file when compiling a SaC program.
    The rule of thumb:
    * value `0` is the fastest time-wise but potentially results in a large memory consumption
    * value `1` reduces the memory consumption to minimum, buy significantly increases compilation time.
    
      *Default value: 500.*
  * `-DEXCLUDE_ERRORS=ON|OFF` --- Do not build benchmarks that cause compiler errors (Default is `ON`).

[1]: https://cmake.org
[2]: http://www.sac-home.org/doku.php?id=download:main
[3]: https://github.com/SacBase/Stdlib
