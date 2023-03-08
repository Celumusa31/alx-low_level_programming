#include "main.h"
#include <stdio.h>
/**
 * factorial - Entry point
 * @n: Character to be checked
 *
 * Return: Always 0 and -1 (Success)
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
