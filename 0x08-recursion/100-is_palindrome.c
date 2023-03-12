#include "main.h"
#include <stdio.h>

/**
 * pl - helper to check if the string palindrome
 * @a: string
 * @b: another pointer to string
 * Return: On success 1.
 * On error, -1 is returned.
 */

int pl(char *a, char *b)
{

if (*(a) == *(b)  && *(a + 1) == *(b - 1) && *b != '\0')
return (1);
else if (*b)
return (pl(a, b + 1));
else
return (0);
}

/**
 * is_palindrome - helper to check if the string palindrome
 * @s: string
 * Return: On success 1.
 * On error, -1 is returned.
 */


int is_palindrome(char *s)
{
return (pl(s, s));
}
