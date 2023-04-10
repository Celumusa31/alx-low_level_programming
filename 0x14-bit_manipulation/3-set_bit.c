#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * se_bit - Entry point
 * @n: Character to be checked
 * @index: Character to be checked
 * Return: Always int (Success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = (sizeof(unsigned long int) * 8);

	if (index >= i)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
