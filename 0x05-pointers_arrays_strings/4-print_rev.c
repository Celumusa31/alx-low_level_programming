#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Entry point
 * @s: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_rev(char *s)
{
	int i;

	for (i = sizeof(s) - 2; i >= 0; i--)
	_putchar(s[i]);
}
