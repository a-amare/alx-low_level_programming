#include "lists.h"

/**
 * sum_listint - Calculate the sum of all values in a linked list.
 * @head: A pointer to the head of the linked list.
 * This function traverses a linked list and calculates the sum of all the
 * values stored in the nodes. It starts from the head node and iterates
 * through the list, adding each value to the running sum.
 * Return: The sum of all values in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
