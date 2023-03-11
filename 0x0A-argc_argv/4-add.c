#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Character to be checked
 * @argv: Character to be checked
 *
 * Return: Always integer (Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int num;

	for (i = 0; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num < 0)
		{
			continue;
		}
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);

	return (0);
}
