#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @low: first index to print
 * @high: last index to print
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low = 0, high = 0, mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = i < size - 1 ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array(array, low, high);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}


