#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the arg in new line.
 *@argc:input
 *@argv:input
 *Return: 0 success.
 */
int main(int argc, char *argv[])
{
int mul;

mul = atoi(argv[1]) * atoi(argv[2]);
if (argc > 3 || argc < 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", mul);
return (0);
}
