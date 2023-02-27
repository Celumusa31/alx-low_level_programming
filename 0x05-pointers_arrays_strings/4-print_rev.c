#include "main.h"
#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_rev(char *s)
{
	int i;

	for (i = sizeof(s); i >= 0; i--)
	printf(*s[i]);
}
