#include "lists.h"

/**
 * sum_dlistint -  the sum of all the data (n) of a dlistint_t linked list.
 * @head: head node o list
 * Return: The sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
