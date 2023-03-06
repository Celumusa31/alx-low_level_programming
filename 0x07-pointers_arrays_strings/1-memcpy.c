#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - Entry point
 * @dest: Character to be checked
 * @src: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always pointer (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	char *src_char = (char *)src;
	char *dest_char = (char *)dest;

	for (i = 0; i < n; i++)
		dest_char[i] = src_char[i];

	return (dest);
}
