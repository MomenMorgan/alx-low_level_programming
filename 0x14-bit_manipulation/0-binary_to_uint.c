#include "main.h"

/**
 * binary_to_uint - converts binary to base 10 number
 * @b: string of binary char.
 * Return: base 10 number or 0 if there is one or more char.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int base = 1;
	int res = 0;


	for (i = 0; b[i] != '\0'; i++)
		;

	while ((i) >= 0)
	{
		i--;

		if (b[i] == '1')
		{
			res += base;

		}
		/*if there is one char or more return 0;*/
		else if (b[i] > '1')
		{
			return (0);
		}

		base = base * 2;

	}
	return (res);
}
