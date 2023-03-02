#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - Entry point
 * @dest: Character to be checked
 * @src: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always char (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL)
	{
		 return NULL;
	}

	char* start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return start;
}

