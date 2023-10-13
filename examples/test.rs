use clingo_sys::*;
use std::ffi::{CStr, CString};
fn main() {
    let file = CString::new("").unwrap();
    let location = clingo_location {
        begin_line: 0,
        end_line: 0,
        begin_column: 0,
        end_column: 0,
        begin_file: file.as_ptr(),
        end_file: file.as_ptr(),
    };

    let mut symbol = 0;
    let c_str = CString::new("test").unwrap();
    if !unsafe { clingo_symbol_create_string(c_str.as_ptr(), &mut symbol) } {
        panic!("Call to clingo_symbol_create_string() failed");
    }

    let mut symbolic_term = std::ptr::null_mut();
    if !unsafe {
        clingo_ast_build(
            clingo_ast_type_e_clingo_ast_type_symbolic_term as i32,
            &mut symbolic_term,
            &location,
            symbol,
        )
    } {
        panic!("clingo_ast_build() symbolic_term failed.",);
    }

    let mut guard = std::ptr::null_mut();
    if !unsafe {
        clingo_ast_build(
            clingo_ast_type_e_clingo_ast_type_guard as i32,
            &mut guard,
            clingo_ast_comparison_operator_e_clingo_ast_comparison_operator_greater_than as isize,
            symbolic_term,
        )
    } {
        panic!("clingo_ast_build() guard failed.");
    }

    let mut size: usize = 0;
    if !unsafe { clingo_ast_to_string_size(guard, &mut size) } {
        panic!("Call to clingo_ast_to_string_size() failed");
    }
    let mut string = Vec::with_capacity(size);
    let string_ptr = string.as_mut_ptr();
    if !unsafe { clingo_ast_to_string(guard, string_ptr, size) } {
        panic!("Call to clingo_ast_to_string() failed");
    }
    let c_str: &CStr = unsafe { CStr::from_ptr(string_ptr) };

    let str_slice: &str = match c_str.to_str() {
        Ok(slice) => slice,
        Err(e) => {
            eprintln!("{:?}", e);
            panic!("Call to c_str.to_str() failed.");
        }
    };
    let res = str_slice.to_string();
    println!("{}", res);
    assert_eq!(res, " > \"test\"".to_string());
}
