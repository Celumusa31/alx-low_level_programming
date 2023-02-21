#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: The character to be checked
 * Return: The value of last digit (Success)
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;
	if (last_digit < 0)
	{
		last_digit = (-1) * last_digit;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
	
