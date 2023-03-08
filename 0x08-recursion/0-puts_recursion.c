#include "main.h"

/**
 *_puts_recursion - print string with new line.
 *@s: string.
 *Return:a string.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
_putchar(*s);
(void *)s++;
_puts_recursion(s);
}
