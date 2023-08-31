#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The value to be assigned to the new node.
 * This function creates a new node with the given value and adds it at the
 * end of a linked list. If the linked list is empty, the new node becomes the
 * head of the list. Otherwise, the new node is appended to the last 's''next'
 * pointer.s
 * Return: A pointer to the newly created node, or NULL if memalloc fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
