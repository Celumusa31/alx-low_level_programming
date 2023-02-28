#include "main.h"
/**
 * puts_half - Entry point
 * str: Character to be checked
 * Return: Always void (Success)
 */
void puts_half(char *str)
{
	int j = 0;
	int i;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}
	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
