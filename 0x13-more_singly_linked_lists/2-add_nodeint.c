#include "lists.h"

/**
 * add_nodeint - adds a new linkedlist element at the head
 * @head: pointer to the previous head
 * @n: new number (data) to be added to the node
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new_node;
	new_node->n = n;
	new_node->next = head;

	return (*new_node);
}
