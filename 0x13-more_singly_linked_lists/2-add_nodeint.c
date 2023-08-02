#include "lists.h"

/**
 * add_nodeint - adds a new linkedlist element at the head
 * @head: pointer to the previous head
 * @n: new number (data) to be added to the node
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (*head == NULL)
	{
		printf("tadow");
	}
	else
	{
		printf("start head: %p \t \t \t %p \n", (void *)*head, (void *)&head);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		printf("fail");
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	printf("next: %p \t \tn: %d\n", (void *)new_node->next, new_node->n);


	*head = new_node;

	free(new_node);

	return (*head);
}
