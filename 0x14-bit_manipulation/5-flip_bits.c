#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * flip_bits - Entry point
 * @n: Character to be checked
 * @m: Character to be checked
 *
 * Return: Always int (Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned int t1, t2;

	while (n > 0 || m > 0)
	{

		t1 = (n & 1);
		t2 = (m & 1);

		if (t1 != t2)
		{
			flips++;
		}
		n >>= 1;
		m >>= 1;
	}

	return (flips);
}
