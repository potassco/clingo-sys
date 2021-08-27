# clingo-sys [![Build Status](https://github.com/potassco/clingo-sys/workflows/CI%20Test/badge.svg)](https://github.com/potassco/clingo-sys)[![Latest Version](https://img.shields.io/crates/v/clingo-sys.svg)](https://crates.io/crates/clingo-sys)[![Rust Documentation](https://docs.rs/clingo-sys/badge.svg)](https://docs.rs/clingo-sys)

Rust raw FFI bindings to the C API of [clingo](https://github.com/potassco/clingo) library.
Clingo version 5.5.0.

## Requirements library

- a c++14 conforming compiler
  - *at least* [gcc](https://gcc.gnu.org/) version 4.9
  - [clang](http://clang.llvm.org/) version 3.1 (using either libstdc++
    provided by gcc 4.9 or libc++)

Per default the crate uses the clingo library via dynamic linking.
It is assumed that a clingo dynamic library is installed on the system.
You have to set the environment variable `CLINGO_LIBRARY_PATH`. For example:

```sh
export CLINGO_LIBRARY_PATH=/scratch/miniconda3/envs/test/lib
```

## Using `static-linking`

The crate defines a [Cargo feature] that allows to use the clingo library via static linking.

[Cargo feature]: https://doc.rust-lang.org/cargo/reference/manifest.html#the-features-section

*Attention: currently `static-linking` does not work with `dl-theory`.*

The recommended way to use the optional static linking support is as
follows.

```toml
[dependencies]
clingo-sys = { version = "0.7.0", features = ["static-linking"] }
```
