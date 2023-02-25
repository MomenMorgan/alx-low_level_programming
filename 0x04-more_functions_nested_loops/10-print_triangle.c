#include "main.h"

/**
 * print_triangle - print triangle
 *@size: varible.
 */

void print_triangle(int size)
{
int r, s, d;

for (r = 1 ; r <= size ; r++)
{

for (s = r ; s < size ; s++)
_putchar(' ');

for (d = 1; d <= r ; d++)
_putchar('#');
if (size <= 0)
{
_putchar('\n');
}

_putchar('\n');
}
}

