#include "3-calc.h"

/**
 * main - perform math operations.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int arg1 ;
	int arg2;
	int  res;
	char s;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	s = *argv[2];

	if ((s == '/' || s == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(arg1, arg2);

	printf("%d\n", res);

	return (0);
}
