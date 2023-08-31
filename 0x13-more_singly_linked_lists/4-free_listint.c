#include "lists.h"

/**
 * free_listint - Free memory allocated for a linked list.
 * @head: A pointer to the head of the linked list.
 * This function frees the memory allocated for each node in a linked list. It
 * starts from the head node and iterates through the list, releasing memory
 * for each node while updating the 'head' pointer to the next node. Once all
 * nodes are freed, the linked list is effectively destroyed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
