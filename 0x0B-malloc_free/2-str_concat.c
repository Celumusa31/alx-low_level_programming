#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 * @s1: Character to be checked
 * @s2: Character to be checked
 *
 * Return: Always pointer (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int a1, a2, a3, i = 0;
	char *ptr;

	a1 = strlen(s1);
	a2 = strlen(s2);
	a3 = a1 + a2 + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(a3));

	if (ptr == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		ptr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}

