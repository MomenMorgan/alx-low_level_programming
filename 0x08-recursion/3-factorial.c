#include "main.h"
/**
 * factorial - print factorial
 * @n:input
 * Return: factorial or -1 for error.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
