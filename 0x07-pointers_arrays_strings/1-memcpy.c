#include "main.h"

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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
