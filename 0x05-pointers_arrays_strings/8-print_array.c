#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: Character to be checked
 * @n: Character to be checked
 * Return: Always void (Success)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
		printf(", ");
	}
	}
	printf('\n');
}

