#include "lists.h"

/**
 * print_dlistint - lists elements of the linked list
 * @h: pointer to the header
 *
 * Return: the size of the header
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}

	return (count);
}