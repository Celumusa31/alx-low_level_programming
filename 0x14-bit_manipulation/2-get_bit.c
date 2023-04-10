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
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}

		n = n / 2;
		i++;
	}

	if (index > i && index < 63)
	{
		return (0);
	}

	return (-1);
}

