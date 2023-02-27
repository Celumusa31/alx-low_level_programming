#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_rev(char *s)
{
	unsigned int len;
	unsigned int index;

	char *start_ptr, *end_ptr, temp;

	len = sizeof(s);

	start_ptr = s;
	end_ptr = s + len - 1;

	for (index = 0; index < len/2; index++)
	{
		temp = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = temp;

		start_ptr++;
		end_ptr--;
	}
}
