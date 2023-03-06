#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - Entry point
 * @s: Character to be checked
 * @c: Character to be checked
 *
 * Return: Always pointer (Success)
 */
char *_strchr(char *s, char c)
{
	char *ptr = strstr(s, c);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
