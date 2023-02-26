#include <stdio.h>

/**
 *main - print the largest prime number
 *Return: 0 success
 */

int main(void)
{

long num = 612852475143;
int p;

for (p = 2; num > 1 ; p++)
{
while ((num % p) == 0)
{
if ((num / p) == 1)
printf("%d\n", p);
num /= p;
}
}
return (0);
}
