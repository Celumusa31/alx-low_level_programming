#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - Entry point
 * @s: Character to be checked
 *
 * Return: Always void (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;

	printf("%s", s);
}
