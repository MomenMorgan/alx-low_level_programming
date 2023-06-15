#include "lists.h"

/**
 * dlistint_len - return the number of nds
 * @h: The head of the list
 * Return: number of nds
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		h = h->next;
	}

	return (nds);
}
