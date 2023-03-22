#include "function_pointers.h"

/**
 *int_index - find certain int index
 *@size: size of array
 *@cmp:function pointer
 *@array: array of int.
 * Return: -1 or i for the index of the int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size ; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
