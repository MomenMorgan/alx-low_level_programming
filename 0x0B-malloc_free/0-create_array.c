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
if (size == 0)
return (NULL);
char *x = malloc(sizeof(c) * size);
if (x == 0)
return (0);
for (i = 0; i < size; i++)
{
x[i] = c;

}
x[i] = '\0';
return (x);
}
