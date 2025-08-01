# C - Doubly linked lists

This project is part of the Holberton School low-level programming curriculum.

## 📚 Learning Objectives

At the end of this project, you should be able to explain the following concepts without external help:

- What is a doubly linked list
- How to use doubly linked lists
- How to manage memory dynamically (with `malloc` and `free`)
- How to add nodes at the beginning and the end of a doubly linked list
- How to print and count the elements of a doubly linked list

## 🛠 Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All code is compiled on Ubuntu 20.04 LTS using `gcc` with the flags:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No more than 5 functions per file
- Only allowed C standard library functions: `malloc`, `free`, `printf`, and `exit`
- All header files must be include-guarded
- You must push a `README.md` file at the root of your repository

## 📁 Project Structure

Each task corresponds to a separate `.c` source file and uses the following data structure:

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: node structure for a doubly linked list
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

