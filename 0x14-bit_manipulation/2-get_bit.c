#include "main.h"
#include <stdio.h>


/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number to be checked.
 * @index: index of the bit to be returned
 * Return: the bin value or -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int next;
	unsigned long int cp;


	if (n == 0)
	{

		return (-1);
	}

	cp = n;
	next = 0;

	while ((cp >>= 1) > 0)
	{
		next++;
	}

	for (; next >= index; next--)
	{
		if ((n >> index) & 1)
			return (1);
		else
			return (0);
	}

}
