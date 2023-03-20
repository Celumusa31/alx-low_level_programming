#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * @d: Charcater to be checked
 *
 * Return: Awlays void (Success)
 */
void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (d != NULL)
	{
		if (name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (age <= 0)
			printf("Age: (nil)\n");
		else
			 printf("Age: %f\n", d->age);

		if (owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
