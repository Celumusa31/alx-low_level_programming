#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Character to be checked
 * @argv: Character to be checked
 *
 * Return: Always integer (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

