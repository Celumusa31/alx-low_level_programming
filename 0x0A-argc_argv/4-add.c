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
	char *a;
	char *b = "0";

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num < 0)
		{
			continue;
		}
		a = argv[i];

		if (num == 0 && *a != *b)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);

	return (0);
}
