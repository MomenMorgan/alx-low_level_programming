#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *x;
	int i;
	int len;

	if (min > max)
	return (NULL);

	len = max - min + 1;

	x = malloc(sizeof(min) * len);
	if (x == NULL)
		return (NULL);

	for(i = 0; min <= max: i++)
		x[i] = min++;
	return (x);
}
