#include <stdio.h>

/**
*main - print small-case char
*Return: (0) sucsess
*/


int main(void)
{

char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}
putchar('\n');
return (0);
}
