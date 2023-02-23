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

	for (i = 0; i < 10; i++)
	{
		int first_digit;
		int last_digit = -1;

		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				first_digit = j;
			}
			else
			{
				first_digit = j / 10;
				last_digit = j % 10;
			}
			_putchar(first_digit + '0');
			if (last_digit > -1)
			{
				_putchar(last_digit + '0');
			}

		}
		_putchar('\n');
	}
}
