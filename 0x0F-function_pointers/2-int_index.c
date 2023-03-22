#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: Character to be checked
 * @size: Character to be checked
 * @cmp: Function pointer
 *
 * Return: Always int (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int result = -1;
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			int j = cmp(array[i]);
			if (j != 0)
			{
				result = i;
				break;
			}
		}
	}
	return result;
}
