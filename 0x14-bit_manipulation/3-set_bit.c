#include "main.h"


/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to be checked.
 * @index: index of the bit to be changed.
 * Return: the bit value or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= 1 << index;

	return (1);

}
