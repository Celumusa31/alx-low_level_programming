#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: Character to be checked
 * @size: Character to be checked
 * @action: Function pointers
 *
 * Return: Always void (Success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
