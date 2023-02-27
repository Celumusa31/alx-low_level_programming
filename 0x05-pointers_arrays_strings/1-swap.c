#include "main.h"

/**
 * swap_int - Entry point
 * @a: Character to be checked
 * @b: Character to be checked
 *
 * Return: Always void (Success)
 */
void swap_int(int *a, int *b)
{
	int temp = a;
	a = b;
	b = temp;

	printf("a = %d, b = %d", a, b);
}

