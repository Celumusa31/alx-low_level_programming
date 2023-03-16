#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_concat - Entry point
 * @s1: Character to be checked
 * @s2: Character to be checked
 * @n: Character to be checked
 * Return: Always pointer (Success)
 */
char *string_concat(char *s1, char *s2, unsigned int n)
{
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int i = 0;
	int j = 0;
	int size;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= s2_length)
		size = s1_length + s2_length + 1;
	else
		size = s1_length + n + 1;

	ptr = (char *) malloc(size * sizeof(char));

	while (*(s1 + i) != '\0')
		*(ptr + i) = *(s1 + i);
		i++;
	if (n >= s2_length)
		while (*(s2 + j) != '\0')
			*(ptr + s1_length + j) = *(s2 + j);
			j++;
	else
		while (j != n)
			*(ptr + s1_length + j) = *(s2 + j);
			j++;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
