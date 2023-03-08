#include "main.h"
/**
 * is_prime_number - Entry point
 * @n: Character to be checked
 *
 * Return: Always int (Success)
 */
int is_prime_number(int n)
{
	int i;

	if (n == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_number(n));
}

