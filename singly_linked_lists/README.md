# C - Singly linked lists

## 📚 Description

This project focuses on learning how to manipulate **singly linked lists** in C.  
A singly linked list is a data structure made up of nodes, where each node stores data and a pointer to the next node.

---

## 🧠 Learning Objectives

- Understand when and why to use linked lists instead of arrays
- Learn how to build, traverse, and free a singly linked list
- Manage dynamic memory using `malloc` and `free`
- Work with structure pointers in C

---

## 🧩 Data Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

