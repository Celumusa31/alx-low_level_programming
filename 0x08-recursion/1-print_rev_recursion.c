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
	int len, i;

	len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		printf("%c", *(s + i));
	}

}
