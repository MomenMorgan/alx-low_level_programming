#include "main.h"

/**
 * prm - helper function to check the prime number
 * @n:number  n
 * @f:countet to n -1
 * Return: On success 1.
 * On error, -1 is returned.
 */

int prm(int n, int f)
{
if (n == 2)
return (1);
else if (n % f == 0 || n < 2)
return (0);
else if (f == n - 1)
return (1);
return (prm(n, f + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: Number input
 * Return: On success 1.
 * On error, -1 is returned.
 */
int is_prime_number(int n)
{
return (prm(n, 2));
}
