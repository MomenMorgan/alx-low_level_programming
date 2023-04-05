#include <stdlib.h>
#include "main.h"

/**
 * word_len -  funchtion to chount the number of xords in a string
 * @s: string to evaluate
 *
 * Return: number of xords
 */
int word_len(char *s)
{
	int warn, ch, x;

	warn = 0;
	x = 0;

	for (ch = 0; s[ch] != '\0'; ch++)
	{
		if (s[ch] == ' ')
			warn = 0;
		else if (warn == 0)
		{
			warn = 1;
			x++;
		}
	}

	return (x);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **comp, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_len(str);
	if (words == 0)
		return (NULL);

	comp = (char **) malloc(sizeof(char *) * (words + 1));
	if (comp == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				comp[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	comp[k] = NULL;

	return (comp);
}
