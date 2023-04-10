#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - Entry point
 * @n: Character to be checked
 * @index: Character to be checked
 *
 * Return: Always int (Success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int *bit = malloc(sizeof(unsigned int) * index);
	unsigned int mask;
	unsigned int masked_n;
	unsigned int thebit;

	unsigned int k;
	if (!index)
		return (-1);

	for (k = 0; k < index; k++)
	{
		mask =  1 << k;
		masked_n = n & mask;
		thebit = masked_n >> k;
		bit[k] = thebit;
	}

	return (*bit);
}

