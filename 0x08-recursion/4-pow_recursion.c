#include "main.h"
/**
 * _pow_recursion - Entry point
 * @x: Character to be checked
 * @y: Character to be checked
 *
 * Return: Always int (Success)
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (x);

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
