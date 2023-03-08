#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Entry point
 * @n: Character to be checked
 *
 * Return: Always int (Success)
 */
int _sqrt_recursion(int n)
{

	return (_sqrt(n, 1));
}

/**
 * _sqrt - Entry point
 * @n: Character to be checked
 * @i: Character to be checked
 *
 * Return: Always int (Success)
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
