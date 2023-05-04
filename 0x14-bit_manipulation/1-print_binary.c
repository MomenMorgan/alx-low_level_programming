#include <stdio.h>
#include "main.h"


/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	int next;
	unsigned long int cp;


	if (n == 0)
	{
		printf("0");
		return;
	}

	cp = n;
	next = 0;

	while ((cp >>= 1) > 0)
	{
		next++;
	}

	for (; next >= 0; next--)
	{
		if ((n >> next) & 1)
			printf("1");
		else
			printf("0");
	}
}
