#include <stdio.h>

/**
 *main - print the largest prime number
 *Return: 0 success
 */

int main(void)
{

long num = 612852475143;
long p;

for (p = 2; p > 1 ; p++)
{
while ((num % p) == 0)
{
if ((num / p) == 1)
printf("%ld\n", p);
num /= p;
}
}
return (0);
}
