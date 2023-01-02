#include "main.h"


/**
 *print_alphabetx10
 *return x10 a-z
 */

void print_alphabet_x10(void)
{
	int n,g;
	g = 0;
	while (g < 10){
		for(n='a' ; n<= 'z'; n++)
		{
		       _putchar(n);

		}
               _putchar('\n');
	       g++;
	}
}
