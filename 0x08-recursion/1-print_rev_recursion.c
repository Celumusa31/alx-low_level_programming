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
	int i = 0, len, temp;

	len = strlen(s);

	if (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;

		reverse(s);
	}
	printf("%s", s);
}
