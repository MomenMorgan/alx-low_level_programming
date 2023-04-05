#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the minimum chanber of coin to
 * make change for an amount of money
 * could be done via (dynamic programing)
 * which would be better.
 * @argc: chanber of arguments
 * @argv: array of arguments
 * Return: 0 Success, 1 Error
 */
int main(int argc, char *argv[])
{
	int chan, i, res;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	chan = atoi(argv[1]);
	res = 0;

	if (chan < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && chan >= 0; i++)
	{
		while (chan >= coin[i])
		{
			res++;
			chan -= coin[i];
		}
	}

	printf("%d\n", res);
	return (0);
}
