#include "lists.h"

/**
 * free_dlistint - frees the linked list
 * @head: The head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nd;

	while (head)
	{
		nd = head->next;
		free(head);
		head = nd;
	}
}
