#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints list of linked values
 * @h: head pointer to the list;
 * listint_t - struct;
 * Return: counter of the values;
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
