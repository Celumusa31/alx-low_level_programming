#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: The character to be checked
 *
 * Return: Always void (Success)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n ; i++)
	{
		int upper_limit = i + 1;

		for (j = 0; j < upper_limit; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
