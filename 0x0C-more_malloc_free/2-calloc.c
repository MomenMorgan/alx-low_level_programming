#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc - allocates memory for an araay.
 * @nmemb: amount.
 * @size: type.
 * Return: pointer to space in meemory or null for error.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)

		return (NULL);

	x = malloc(sizeof(size) * nmemb);
	if (x == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		x[i] = 0;
		i++;
	}

	return (x);
}
