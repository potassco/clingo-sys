# clingo-sys

Rust bindings to the [clingo](https://github.com/potassco/clingo) library.
Clingo version 5.5.0.

## Requirements

- a c++14 conforming compiler
  - *at least* [gcc](https://gcc.gnu.org/) version 4.9
  - [clang](http://clang.llvm.org/) version 3.1 (using either libstdc++
    provided by gcc 4.9 or libc++)

- the bison parser generator
  at least version 2.5
  version 3.0 produces harmless warnings (to stay backwards-compatible)
  
- the re2c lexer generator
  at least version 0.13
  version 0.13.5 is used for development