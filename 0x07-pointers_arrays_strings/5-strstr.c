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
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

