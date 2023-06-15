#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at nth position
 * @head: pointer to the head o the list
 * @index: index of the nth node
 * Return: returns -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nd = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (nd == NULL)
			return (-1);
		nd = nd->next;
	}

	if (nd == *head)
	{
		*head = nd->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		nd->prev->next = nd->next;
		if (nd->next != NULL)
			nd->next->prev = nd->prev;
	}

	free(nd);
	return (1);
}
