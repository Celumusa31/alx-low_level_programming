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
	void *ptr;

	ptr = malloc(sizeof(int));

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
