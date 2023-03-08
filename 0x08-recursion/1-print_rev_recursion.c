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
	char revstr(s);
	char *stptr = s;
	char *rvptr = revstr;
	int i = -1;

	while (*stptr)
	{
		stptr++;
		i++;
	}
	while (i >= 0)
	{
		stptr--;
		*rvptr = *stptr;
		rvptr++;
		--i;
	}
	*rvptr = '\0'

}
