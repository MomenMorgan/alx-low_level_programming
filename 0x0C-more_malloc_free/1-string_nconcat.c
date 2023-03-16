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
unsigned int len, i, j, len2;
if (s1 == 0)
	len = 0;
else
	len = strlen(s1);
if (s2 == 0)
	len2 = 0;
else
	len2 = strlen(s2);
x = malloc(sizeof(char) * (len + n) + 1);
if (x == 0)
	return (NULL);
i = 0;
if (len2 > n)
	len2 = n;
while (i < len)
{
	x[i] = s1[i];
	i++;
}
j = 0;
while (j < len2)
{
	x[j + i] = s2[j];
	j++;
}
x[i + j] = '\0';
return (x);
}
