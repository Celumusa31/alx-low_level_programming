#include "main.h"

/**
 * print_rev - Entry point
 * @s: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; i < sizeof(s); i--)
	_putchar(s[i]);
}
