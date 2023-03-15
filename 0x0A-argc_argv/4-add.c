#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sumi of  numbers in new line.
 *@argc:input
 *@argv:input
 *Return: 0 success 1 on Error .
 */
int main(int argc, char *argv[])
{
int i;
int j;
int sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1 ; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0'  || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
