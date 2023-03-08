#include "main.h"
/**
 * is_prime_number - Entry point
 * @n: Character to be checked
 *
 * Return: Always int (Success)
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 0|| n == 1)
		return (0);

	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	i++;
	return (is_prime_number(n));
}

