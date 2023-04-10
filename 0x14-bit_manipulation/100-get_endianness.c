#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - Entry point
 *
 * Return: Always int (Success)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char*) &x;

	if (*c == 1)
	{
		return (1);
	}
	return (*c);
}
