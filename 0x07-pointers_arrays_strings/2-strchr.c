#include "main.h"
#includ <stdio.h>
/**
 *_strchr - search for a char.
 *@s: varible.
 *@c: varible.
 * Return: pointer to s or null of none.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
*s++;
}
return (NULL);
}
