#include "main.h"
/**
 * puts2 - Entry point
 * @str: Character to be checked
 *
 * Return: Always void (Success)
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
