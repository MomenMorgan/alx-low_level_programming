#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an araay.
 * @nmemb: amount.
 * @size: type.
 * Return: pointer to space in meemory or null for error.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
	return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{

		x[i] = 0;
		i++;
	}

	return (x);
}
