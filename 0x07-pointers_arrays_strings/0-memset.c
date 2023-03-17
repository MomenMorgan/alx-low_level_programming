#include "main.h"

/**
 * _memset - print n of buffer
 * @s: array .
 * @b:char.
 * @n: number to be edited.
 * Return: pointer to the calling function.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
