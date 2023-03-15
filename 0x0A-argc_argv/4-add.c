#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multbli of tow numbers in new line.
 *@argc:input
 *@argv:input
 *Return: 0 success.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}

while(argc--)
{
i++;
if(argc == 0)
break;
else if (argv[i] > '9' )
{
puts("Error");
return (1);
}    
*argv++;
sum += atoi(*argv);
}
printf("%d\n", sum);
return (0);
}
