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
	for (int low = 0, high = n - 1; low < high; low++, high--)
	{
		int temp = a[low];
		 a[low] = a[high];
		a[high] = temp;
	}
}

