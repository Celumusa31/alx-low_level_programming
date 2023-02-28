#include "main.h"
/**
 * puts_half - Entry point
 * @str: The character to be checked
 *
 * Return: Always void (Success)
 */
void puts_half(char *str)
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
	-putchar('\n');
}
