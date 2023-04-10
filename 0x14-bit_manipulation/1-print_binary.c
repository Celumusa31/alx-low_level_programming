#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - Entry point
 * @n: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	while (n)
	{
		if (n & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		n >>= 1;
	}
}
