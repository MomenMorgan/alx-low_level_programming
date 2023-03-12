#include "main.h"

/**
 * pl - helper to check if the string palindrome
 * @a: string
 * @b: another pointer to string
 * Return: On success 1.
 * On error, -1 is returned.
 */

int pl(char *a, char *b)
{
if (*b != '\0')
{
if (*(a) == *(b)  && *(a + 1) == *(b - 1))
return (1);
else
pl(a, b + 1);
}
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
