#include "function_pointers.h"

/**
 *array_iterator - pointer to call back functios to print array[i]
 *@array: array items
 *@size: size of array
 *@action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !size || !array)
		return;


	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
