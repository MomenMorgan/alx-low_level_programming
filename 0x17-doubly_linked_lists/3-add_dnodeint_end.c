#include "lists.h"

/**
 * add_dnodeint_end - appends new node at the end o the list
 * @head: pointer to the head of the list
 * @n: int of the new node
 * Return: null on faliure adress of the new node on success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *start, *last;

	new = malloc(sizeof(dlistint_t));
	if (start == NULL)
		return (NULL);

	start->n = n;
	start->next = NULL;

	if (*head == NULL)
	{
		start->prev = NULL;
		*head = start;
		return (start);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = start;
	start->prev = last;

	return (start);
}
