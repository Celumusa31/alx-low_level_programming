#include "main.h"
/**
 * print_sign - Entry point
 * @n : The character to be checked
 * Return: Always 1, 0 and -1 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

