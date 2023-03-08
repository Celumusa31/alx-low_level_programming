#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n: Character to be checked
 *
 * Return: Always int (Success)
 */
int _sqrt_recursion(int n)
{
	if (n >= 0)
		return (n);

	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n));
}
