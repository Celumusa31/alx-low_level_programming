#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Entry point
 * @str: Character to be checked
 *
 * Return: Always char (Success)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i; words; start; end;

	k = 0;
	len = 0;
	c = 0;
	while (*(str + len))
		len++;
	words = wordnos(str);

	if (words == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
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
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}
