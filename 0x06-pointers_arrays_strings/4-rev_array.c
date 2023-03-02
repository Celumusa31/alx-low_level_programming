#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Entry point
 * @a: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always void (Success)
 */
void reverse_array(int *a, int n)
{
	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}

}

