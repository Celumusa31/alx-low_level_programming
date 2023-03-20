#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Entry point
 * @d: Character to be checked
 *
 * Return: Always void (Success)
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
