#include "lists.h"

/**
 * free_listint2 -  sets the head to NULL
 * @head: double pointer to the header
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		head = (*head)->next;
		free(temp);
	}
}
