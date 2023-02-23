#include "main.h"

/**
 *_isdigit- is digit
 * @c: varible
 * Return: 1 for digit 0 for none
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
