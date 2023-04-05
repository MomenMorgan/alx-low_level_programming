#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints operation code
 * @argc: number of arguments
 * @argv: array  of arguments
 * Return: Always 0 .
 */

int main(int argc, char *argv[])
{
	int buff;
	int i;
	char *agrs;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	buff = atoi(argv[1]);

	if (buff < 0)
	{
		printf("Error\n");
		exit(2);
	}

	agrs = (char *)main;

	for (i = 0; i < buff; i++)
	{
		if (i == buff - 1)
		{
			printf("%02hhx\n", agrs[i]);
			break;
		}
		printf("%02hhx ", agrs[i]);
	}

	return (0);
}
