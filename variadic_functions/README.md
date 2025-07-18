# 0x10. C - Variadic functions

## Description

This project introduces **variadic functions** in C – functions that can accept a variable number of arguments. You will learn how to handle such functions using macros from the `stdarg.h` header file.

## Learning Objectives

At the end of this project, you should be able to explain the following concepts without the help of Google:

### General

- What are **variadic functions** and when to use them
- How to use the macros:
  - `va_start`
  - `va_arg`
  - `va_end`
- How and why to use the `const` type qualifier in C

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All code compiled on Ubuntu 20.04 LTS with:  
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- `README.md` file is mandatory
- Code should use the **Betty style** and will be checked with `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Only allowed standard functions: `malloc`, `free`, `exit`
- You are allowed to use macros `va_start`, `va_arg`, `va_end`
- You can use `_putchar`
- You must include all function prototypes in a header file: `variadic_functions.h`
- All header files must be include-guarded

## Files

| File Name             | Description                                  |
|----------------------|----------------------------------------------|
| `0-sum_them_all.c`    | Returns the sum of all its parameters        |
| `1-print_numbers.c`   | Prints numbers separated by a string         |
| `2-print_strings.c`   | Prints strings separated by a string         |
| `3-print_all.c`       | Prints anything based on a format string     |
| `variadic_functions.h`| Header file with all function prototypes     |

## Usage

Example for compiling a file:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-sum_them_all.c -o sum
./sum

