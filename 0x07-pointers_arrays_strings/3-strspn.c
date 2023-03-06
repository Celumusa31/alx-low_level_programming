#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - Entry point
 * @s: Character to be checked
 * @accept: Character to be checked
 *
 * Return: Always number of bytes (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
		return (len);

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}

