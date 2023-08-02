#include "lists.h"

/**
 * listint_len - returns count of elements in a linked list
 * @h: address of the head
 * Return: returns count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
