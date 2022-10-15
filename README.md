# EECE667-termProject

[![Build Status](https://img.shields.io/badge/develop-ongoing%20-green)]()

Placement Implementation in Cpp with OpenDB API

## External Dependencies

You can use `Dockerfile` in the `OpenDB` submodule, 
or you are required to install `cmake`, `siwg`, `spdlog`, `boost` in the `Ubuntu` Environment.

## How to build

```shell
git clone --recurse-submodules https://github.com/ApeachM/EECE667-termProject.git
cd EECE667-termProject
```

```shell
mkdir build
cd build
cmake ..
make
./Placer
```

## Contributor

[Minjae Kim](https://github.com/ApeachM) in POSTECH
Email: kmj0824@postech.ac.kr