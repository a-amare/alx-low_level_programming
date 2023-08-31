#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a specific index in a linkedlist.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 on success, -1 on failure (out of bounds or empty list).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
