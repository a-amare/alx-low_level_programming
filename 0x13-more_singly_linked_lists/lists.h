#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/******************2***************/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);


#endif
