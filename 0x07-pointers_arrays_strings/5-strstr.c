#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - Entry point
 * @haystack: Character to be checked
 * @needle: Character to be checked
 *
 * Return: Always pointer (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr = strstr(haystack, needle);

	if (ptr != NULL)
	{
		return (ptr);
	}
	else
		return (NULL);
}

