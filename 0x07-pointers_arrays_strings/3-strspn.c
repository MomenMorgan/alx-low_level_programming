#include <stdio.h>
#include "main.h"
/**
 *_strspn - Entry point
 *@s: input
 *@accept: input
 *Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int coun = 0;
while (s[i] != '\0')
{
i++;
while (accept[j] != '\0')
{
j++;
if (s[i] == accept[j])
{
coun++;
}
}
j = 0;
}
return (coun);
}
