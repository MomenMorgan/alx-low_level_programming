#include "3-calc.h"

/**
 * get_op_func - function pointer chooses the selected function
 * @s: the operator given by the user
 * operator given as a parameter
 * Return: pointer to the  selecteed function
 */

int (*get_op_func(char *s))(int, int)
{
    /*operators to be chooses*/

	op_t operat[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (operat[i].op)
	{
		if (strcmp(operat[i].op, s) == 0)
			return (operat[i].f);
		i++;
	}

	return (NULL);
}
