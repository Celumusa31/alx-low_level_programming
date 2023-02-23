#include "main.h"
/**
 * print_line - Entry point
 * @n: The character to be checked
 * Return: Always void (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

