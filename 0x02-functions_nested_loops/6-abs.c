#include "main.h"
/**
 * _abs - Entry points
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		_putchar('0' + n);
	}
	else
	{
		_putchar('0' + n);
	}
	_putchar('\n');
	return (0);
}
