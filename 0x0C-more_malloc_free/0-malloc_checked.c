#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: Character to be checked
 *
 * Return: Always pointer (Success)
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr, n, i;

	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = i;

	return (ptr);
}
