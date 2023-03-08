#include "main.h"

int _sqrt(intn, int i);
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

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
