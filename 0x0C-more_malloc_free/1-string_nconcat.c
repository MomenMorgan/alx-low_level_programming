#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenate s1 to n of s2;
 *@s1: first string
 *@s2: second string
 *@n:length to be copied
 *Return: pointer to x or NULL for Error.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *x;
int len, i;
len = strlen(s1);

x = malloc(sizeof(char) * (len + n) + 1);
if (x == 0)
{
	return (NULL);
}

i = 0;
while (*s1 != '\0')
{
	x[i] = *s1;
	s1++;
	i++;
}
while (n != 0)
{
	x[i] = *s2;
	i++;
	s2++;
	n--;
}

x[i] = '\0';
return (x);
}
