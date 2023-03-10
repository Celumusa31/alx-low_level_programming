#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The character to be checked
 * Return: The value of last digit (Success)
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = (-1) * lastDigit;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
