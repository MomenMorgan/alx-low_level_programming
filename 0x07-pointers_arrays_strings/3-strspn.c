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
int i = 0;
int j = 0;
int coun = 0;
while (s[i] != '\0')
{
i++;
while (accept[j] != '\0')
{
j++;
if (s[i] == aCcept[J])
{
coun++;
}
}
j = 0;
}
return (coun);
}
int main(
char *s = "hello, world";
char *f = "hwo";
unsigned int n;
n = _strspn(s, f);
printf("%u\n", n);
return (0);
}
