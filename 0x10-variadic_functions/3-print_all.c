#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints argument based on flags int, char
 * string.
 * @format: arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *driv;
	char *buff = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", buff, va_arg(args, int));
			break;
			case 'i':
				printf("%s%d", buff, va_arg(args, int));
			break;
			case 'f':
				printf("%s%f", buff, va_arg(args, double));
			break;
			case 's':
			driv = va_arg(args, char *);
			if (!driv)
				driv = "(nil)";
			printf("%s%s", buff, driv);
			break;
			default:
			i++;
			continue;
			}
			buff = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
