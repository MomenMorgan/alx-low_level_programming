#include <stdlib.h>
/**
 * create_array - creat an array of single char
 * @c: char
 * @size: size of array
 * Return: pointer to x or NULL.
 */


char *create_array(unsigned int size, char c)
{
char *x = (char *)malloc(sizeof(c) * size);
if (size == 0)
return (NULL);
int i;
for (i = 0; i < size; i++)
{
x[i] = c;
}
return (x);
}
