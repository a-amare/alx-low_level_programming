# Hash Tables Project

This project focuses on understanding hash functions, hash tables, and their implementation in C. By completing the tasks in this project, you'll gain knowledge about the following topics:

## Learning Objectives

-   General:
    -   What is a hash function
    -   What makes a good hash function
    -   What is a hash table, how they work, and how to use them
    -   What is a collision and the main ways of dealing with collisions in the context of a hash table
    -   Advantages and drawbacks of using hash tables
    -   Most common use cases of hash tables

## Copyright - Plagiarism

-   You are expected to solve the tasks independently, avoiding plagiarism and not copying someone else's work.
-   Publishing the content of this project is not allowed.
-   Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

-   General:
    -   Allowed editors: vi, vim, emacs
    -   Compilation on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
    -   Files should end with a new line
    -   A `README.md` file at the root of the project folder is mandatory
    -   Code should follow the Betty style, which will be checked using `betty-style.pl` and `betty-doc.pl`
    -   Do not use global variables
    -   No more than 5 functions per file
    -   You are allowed to use the C standard library
    -   Prototypes of all functions should be included in the header file `hash_tables.h`
    -   Header files should be include guarded

## Data Structures

For this project, use the following data structures:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, a string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

## Tasks

### Task 0: hash_table_create

Write a function that creates a hash table.

Prototype: `hash_table_t *hash_table_create(unsigned long int size);`

-   `size` is the size of the array
-   Returns a pointer to the newly created hash table
-   If something went wrong, your function should return `NULL`

### Task 1: hash_djb2

Write a hash function implementing the djb2 algorithm.

Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

-   You are allowed to copy and paste the function from this page

### Task 2: key_index

Write a function that gives you the index of a key.

Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

-   `key` is the key
-   `size` is the size of the array of the hash table
-   This function should use the `hash_djb2` function you wrote earlier
-   Returns the index at which the key/value pair should be stored in the array of the hash table

### Task 3: hash_table_set

Write a function that adds an element to the hash table.

Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

-   `ht` is the hash table you want to add or update the key/value to
-   `key` is the key (it cannot be an empty string)
-   `value` is the value associated with the key (must be duplicated; can be an empty string)
-   Returns: 1 if it succeeded, 0 otherwise
-   In case of collision, add the new node at the beginning of the list

### Task 4: hash_table_get

Write a function that retrieves a value associated with a key.

Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`

-   `ht` is the hash table you want to look into
-   `key` is the key you are looking for
-   Returns the value associated with the element, or `NULL` if the key couldn’t be found

### Task 5: hash_table_print

Write a function that prints a hash table.

Prototype: `void hash_table_print(const hash_table_t *ht);`

-   `ht` is the hash table
-   Print the key/value pairs in the order that they appear in the array of the hash table
-   Order: array, list
-   Format: see example
-   If `ht` is `NULL`, don’t print anything

### Task 6: hash_table_delete

Write a function that deletes a hash table.

Prototype: `void hash_table_delete(hash_table_t *ht);`

-   `ht` is the hash table

## Authors

This project was implemented by a-42 for the ALX School.
