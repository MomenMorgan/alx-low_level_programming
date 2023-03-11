#include <stdio.h>

/**
 * main - prints the arg in new line.
 *@argc:input
 *@argv:input
 *Return: 0 success.
 */
int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
