#include "main.h"



/**
 * clear_bit -  returns the value of a bit at a given index.
 * @n: number to be checked.
 * @index: index of the bit to be cleared
 * Return: the bin value or -1 on failure
 */



int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);

}
