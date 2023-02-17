#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * describtion: program prints output:
 *            if n is greater than 0:is positive
 *            if n is 0: is zero
 *            if n is less than 0:is negative
 * Return: 0
 */

int main(void)
{
	int n;

	scanf("%d", &n);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n == 0)
		printf("is zero\n");
	else(n < 0)
		printf("is negative\n");

	return (0);
}
