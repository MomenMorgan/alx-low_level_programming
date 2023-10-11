#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 *             Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL on failure
 */


listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *current, *prev;

	if (!list || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;
	while (current->n < value)
	{
		prev = current;
		for (i = 0; i < step; i++)
		{
			if (current->next)
				current = current->next;
			else
				break;
		}
		if (current->n >= value)
			break;
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (!current->next)
			break;
	}
	printf("Value found between indexes [%lu] and
		[%lu]\n", prev->index, current->index);
	while (prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		if (!prev->next)
			break;
		prev = prev->next;
	}
	return (NULL);
}
