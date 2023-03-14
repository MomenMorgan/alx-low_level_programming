#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/**
 * _strdup - duplicate a string
 * @str: string lit.
 * Return: pointer to the duplicated string or null on error.
 */

char *_strdup(char *str)
{
int size = strlen(str) + 1;
char *x;
if (size == 0)
return (0);
x = malloc(sizeof(char) * size);
while (*str)
{
*x = *str;
str++;
x++;
}
*x = '\0';
while (size != 1)
{
size--;
x--;
}
if (x == NULL)
return (NULL);
return (x);
}
