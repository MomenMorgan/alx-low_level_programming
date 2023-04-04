#include "lists.h"

/**
 * listint_len - prints list of linked values
 * @h: head pointer to the list;
 * listint_t - struct;
 * Return: counter of the values;
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{

		h = h->next;
		counter++;
	}
	return (counter);
}
