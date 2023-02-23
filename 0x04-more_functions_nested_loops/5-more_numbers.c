#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always void (Success)
 */
void more_numbers(void)
{
	int i;
	int j;
	int a = j / 10;
	int b = j % 10;

	for (i = 0; i < 10; i++)
		for (j = 0; j <= 14; j++)
			if (j < 10)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(a + '0');
				_putchar(b + '0');
			}
	_putchar('\n');
}
