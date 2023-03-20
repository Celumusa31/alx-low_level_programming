#include "dog.h"

/**
 * init_dog - Entry point
 * @d: Characater to be checked
 * @name: Character to be checked
 * @age: Character tot be checked
 * @owner: Character to be checked
 *
 * Return: Always void (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
