#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multbli of tow numbers in new line.
 *@argc:input
 *@argv:input
 *Return: 0 success.
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1 ; i < argc; i++)
{
if (atoi(argv[i]) > 9 || atoi(argv[i]) < 1)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d", sum);
return (0);
}
