#include "lists.h"

/**
 * print_dlistint - Prints all the elements in doubly linked list
 * @h: head of my linked list
 * Return: all nds
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nds);
}
