#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - Entry point
 * @str: Character to be checked
 *
 * Return: Always pointer (Success)
 */
char *_strdup(char *str)
{
	int size;
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc (size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (*str)
		*ptr++ = *str++;
	*ptr++ = '\0';
	return (ptr);

	free(ptr);
}
