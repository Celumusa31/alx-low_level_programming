#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - Entry point
 * @s: Character to be checked
 * @accept: Character to be checked
 *
 * Return: Always pointer (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = strpbrk(s, accept);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
		return (NULL);
}

