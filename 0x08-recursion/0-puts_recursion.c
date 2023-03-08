#include "main.h"
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
_putchar(*s);
(void *)s++;
_puts_recursion(s);
}
