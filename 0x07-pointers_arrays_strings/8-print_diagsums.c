#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: Character to be checked
 * @size: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d", a[i][j]);
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j || i + j == size - 1)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("%d", sum);
}

