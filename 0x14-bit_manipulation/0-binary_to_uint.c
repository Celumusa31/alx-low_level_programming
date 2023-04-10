#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Entry point
 * @b: Character to be checked
 *
 * Return: Always int (Success)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (b == NULL)
		return 0;

	while (*b == '0' || *b == '1')
	{
		val <<= 1;
		val += *b - '0';
		b++;
	}

	if (*b != '\0')
	{
		val = 0;
	}
	return (val);
}
