#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: index to insert the node
 * @n: int for the new node
 * Return: null on faliure or the adress of the new node on success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nd = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		nd = nd->next;
		if (nd == NULL)
			return (NULL);
	}

	if (nd->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = nd;
	new->next = nd->next;
	nd->next->prev = new;
	nd->next = new;

	return (new);
}
