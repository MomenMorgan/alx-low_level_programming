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
int check;
int i = 0;
int j = 0;
int coun = 0;
while (s[i] != '\0')
{
i++;
while (accept[j] != '\0')
{
j++;
if (s[i] ==  accept[j])
{
coun++;
check = 1;
}
}
if (coun == 0)
{
return (coun);
}
j = 0;
}
return (coun);
}
