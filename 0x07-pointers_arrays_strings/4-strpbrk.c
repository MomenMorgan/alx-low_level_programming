#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s:input
 * @accept:input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
char *q = accept;
while (*s != '\0')
{
while (*q != '\0')
{
if (*s == *q)
{
return (s);
}

(void*)q++;
}
q = accept;
(void*)s++;
}
return (NULL);
}
