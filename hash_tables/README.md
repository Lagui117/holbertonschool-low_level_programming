# C - Hash tables

## Description

This project introduces the concept of **hash tables**, an essential data structure used in many applications for fast data retrieval. You will learn how to implement hash functions, handle collisions, and use chaining to store key-value pairs efficiently.

## Learning Objectives

By the end of this project, you should be able to explain:

- What is a hash function
- What makes a good hash function
- What is a hash table, how it works and how to use it
- What is a collision and how to handle it
- Advantages and disadvantages of hash tables
- Common use cases for hash tables

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Your code should use the Betty style
- No global variables
- No more than 5 functions per file
- Use of standard C library is allowed
- All function prototypes should be declared in `hash_tables.h`
- All header files should be include guarded

## Data Structures

```c
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key (string, unique in the HashTable)
 * @value: The value associated with the key
 * @next: A pointer to the next node (for collision handling with chaining)
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size, each element points to the first node of a linked list
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

