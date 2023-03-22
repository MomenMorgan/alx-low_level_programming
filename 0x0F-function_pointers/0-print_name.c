#include <stddef.h>
#include "function_pointers.h"


/**
 * print_name - prints a name as is
 * @f:FUNCTION POINTER.
 * @name: name of the person
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	 (*f)(name);
}
