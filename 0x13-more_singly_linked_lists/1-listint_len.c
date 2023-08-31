#include "lists.h"

/**
 * listint_len - Calculate the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 * This function traverses a linked list and counts the number of elements
 * present in it.
 * 
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
