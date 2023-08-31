#include "lists.h"

/**
 * free_listint2 - Free memory allocated for a linked list.
 * @head: A pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
