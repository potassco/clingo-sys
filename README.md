# clingo-sys [![Build Status](https://github.com/potassco/clingo-sys/workflows/CI%20Test/badge.svg)](https://github.com/potassco/clingo-sys)[![Latest Version](https://img.shields.io/crates/v/clingo-sys.svg)](https://crates.io/crates/clingo-sys)[![Rust Documentation](https://docs.rs/clingo-sys/badge.svg)](https://docs.rs/clingo-sys)

Rust raw FFI bindings to the C API of [clingo](https://github.com/potassco/clingo) library.
Clingo version 5.5.0.

## Requirements for a static library

- a c++14 conforming compiler
  - *at least* [gcc](https://gcc.gnu.org/) version 4.9
  - [clang](http://clang.llvm.org/) version 3.1 (using either libstdc++
    provided by gcc 4.9 or libc++)

## `dynamic_linking`

The crate defines a [Cargo feature] that allows to use the clingo library via dynamic linking.

[Cargo feature]: https://doc.rust-lang.org/cargo/reference/manifest.html#the-features-section

With dynamic linking enabled the clingo library is not build for static linking but it is assumed that a
clingo dynamic library is installed on the system.
You have to define the environment variable `CLINGO_LIBRARY_PATH` for example:

```sh
export CLINGO_LIBRARY_PATH=/scratch/miniconda3/envs/clingo/lib
```

The recommended way to use the optional dynamic linking support is as
follows.

```toml
[dependencies]
clingo-sys = { git = "https://github.com/potassco/clingo-sys", branch = "master", features = ["dynamic_linking"] }
```
