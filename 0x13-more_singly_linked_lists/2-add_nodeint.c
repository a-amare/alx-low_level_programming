#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @n: The value to be assigned to the new node.
 * This function creates a new node with the given value and adds it at the
 * beginning of a linked list. The 'head' parameter is updated to point to the
 * newly added node, effectively making it the new head of the list.
 * Return: A pointer to the newly created node, or NULL if malloc fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
