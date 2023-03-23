#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - variadic function to print strings.
 * @separator: separator between strings
 * @n: number of strings
 * Return: none.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *l;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{

		l = va_arg(x, char *);

		if (!l)
		{
			l = "(nil)";

		}

		if (!separator)
			printf("%s", l);

		else if (separator && n)
		{
			printf("%s", l);

			if (i == n - 1)
				continue;
			printf("%s", separator);
		}

	}

	printf("\n");

	va_end(x);
}
