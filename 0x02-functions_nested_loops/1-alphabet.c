#include "main.h"



/**

 * print_alphabet - Make the alphabet

 *

 * Return: void

 */
int putchar ;
void print_alphabet(void)
  
{
  
  char c;
  

  
  for (c = 'a'; c <= 'z'; c++)
    
    {
       putchar(c);
      
    }
  

  
  putchar('\n');
  
}
