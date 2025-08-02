# C - File I/O

This project is part of the Holberton School curriculum. It focuses on file input/output operations using system calls in C.

## Learning Objectives

By the end of this project, you should be able to:

- Understand what file descriptors are
- Use system calls: `open`, `read`, `write`, and `close`
- Know the 3 standard file descriptors: STDIN, STDOUT, and STDERR
- Use flags such as `O_RDONLY`, `O_WRONLY`, `O_RDWR`
- Set file permissions when creating files
- Understand what a system call is and how it differs from regular functions

## Allowed Functions and System Calls

- `open`
- `read`
- `write`
- `close`
- `malloc`, `free`, and `exit`
- `_putchar` (optional)
- `dprintf`

## Requirements

- Code must follow the Betty style
- Compiled on Ubuntu 20.04 LTS using `gcc` with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No global variables
- No use of standard C functions like `printf`, `puts`, `calloc`, `realloc`, etc.
- No more than 5 functions per file

## Files

| File | Description |
|------|-------------|
| `0-read_textfile.c` | Reads a text file and prints it to the standard output |
| `1-create_file.c` | Creates a file with specific permissions and writes text to it |
| `2-append_text_to_file.c` | Appends text to an existing file |
| `3-cp.c` | Copies the content of a file to another file |

## Compilation

Each `.c` file will be compiled using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <file>.c -o <output>

