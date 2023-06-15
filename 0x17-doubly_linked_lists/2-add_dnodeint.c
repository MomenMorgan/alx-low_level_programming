#include "lists.h"

/**
 * dlistint_len - return the number of elements in linked list
 * @h: The head of the list
 * Return: returns the number of nds
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
