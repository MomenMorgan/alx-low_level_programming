#include <stdlib.h>
/**
 * create_array - creat an array of single char
 * @c: char
 * @size: size of array
 * Return: pointer to x or NULL.
 */


char *create_array(unsigned int size, char c)
{
unsigned int i;
char *x = (char *)malloc(sizeof(c) * size);
if (size == 0)
return (NULL);
for (i = 0; i < size; i++)
{
x[i] = c;
}
if (x == 0)
return (0);
return (x);
}
