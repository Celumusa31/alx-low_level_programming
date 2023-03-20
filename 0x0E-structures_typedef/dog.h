#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 * @name: Character to be checked
 * @age: Character to be checked
 * @owner: Character to be checked
 *
 * Return: Always void (Success)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

#endif
