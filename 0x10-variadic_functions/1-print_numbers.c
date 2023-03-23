#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with a separator.
 * @separator: separator between numbers.
 * @n: parameter numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i, l;

	va_start(x, n);

	if (separator == NULL)
		separator = " ";

	for (i = 0; i < n; i++)
	{
		l =  va_arg(x, int);
		printf("%d", l);
		if (i == n - 1)
			continue;

		printf("%c", *separator);
		printf(" ");
	}

	printf("\n");
	va_end(x);

}
