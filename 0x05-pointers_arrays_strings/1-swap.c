#include "main.h"
#include <stdio.h>

/**
 * swap_int - Entry point
 * @a: Character to be checked
 * @b: Character to be checked
 *
 * Return: Always void (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

