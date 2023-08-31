#include "lists.h"

/**
 * get_nodeint_at_index - Get the node at a specific index in a linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve (starting from 0).
 * This function traverses a linked list to find and return the node located
 * at the specified index. If the index is out of bounds (greater than the
 * length of the list), the function returns NULL.
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
