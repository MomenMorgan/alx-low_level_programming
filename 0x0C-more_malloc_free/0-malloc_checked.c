#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - make a space in the heap
 *@b: size pf the varible.
 *Return: pointer to the function or exit with 98.
 */


void *malloc_checked(unsigned int b)
{
char *x;
x = malloc(b);

if (x == 0)
{
	exit(98);
}
return (x);
}
