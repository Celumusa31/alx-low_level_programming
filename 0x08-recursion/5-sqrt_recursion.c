#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n: Character to be checked
 *
 * Return: Always int (Success)
 */
int _sqrt_recursion(int n)
{

	return (_sqrt_wrapper(n, 1, n));
}

int _sqrt_wrapper(int n, int min, int max)
{
	if (max < min)
		return (-1);

	int guess = (min + max) / 2;
	int guess_squared = guess * guess;

	if (guess_squared == n)
		return (guess);

	else if (guess_squared < n)
		return (_sqrt_wrapper(n, guess + 1, max));

	else
		return (_sqrt_wrapper(n, min, guess - 1));
}
