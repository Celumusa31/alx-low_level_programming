#include "main.h"
#include <stdlib.h>
/**
 * print_rev - Entry point
 * @s: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_rev(char *s)
{
	int len;
	int index;

	char *start_ptr, *end_ptr, temp;

	len = strlen(s);

	start_ptr = s;
	end_ptr = s + len - 1;

	for (index = 0; index < len/2; index++)
		temp = *end_ptr;
		*end_ptr = *start_ptr;
		*start_ptr = temp;

		start_ptr++;
		end_ptr--;
}
