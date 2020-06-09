# clingo-sys)
[![Build Status](https://github.com/potassco/clingo-sys/workflows/CI%20Test/badge.svg)](https://github.com/potassco/clingo-sys)
[![Latest Version](https://img.shields.io/crates/v/clingo-sys.svg)](https://crates.io/crates/clingo-sys)
[![Rust Documentation](https://docs.rs/clingo-sys/badge.svg)](https://docs.rs/clingo-sys)

Rust raw FFI bindings to the C API of [clingo](https://github.com/potassco/clingo) library.
Clingo version 5.5.0.

## Requirements

- a c++14 conforming compiler
  - *at least* [gcc](https://gcc.gnu.org/) version 4.9
  - [clang](http://clang.llvm.org/) version 3.1 (using either libstdc++
    provided by gcc 4.9 or libc++)
