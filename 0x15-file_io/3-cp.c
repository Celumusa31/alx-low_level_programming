#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: Character to be checked
  * @argv: Character to be checked
  *
  * Return: Always int (Success)
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cpy(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - Entry point
  * @source: The character to be checked
  * @destination: The character to be checked
  *
  * Return: Always void (Success)
  */
void cpy(const char *source, const char *destination)
{
	int fp, fp2;
	int reading;
	char buffer[1024];

	fp = open(source, O_RDONLY);
	if (!source || fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}

	fp2 = open(destination, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((reading = read(fp, buffer, 1024)) > 0)
	{
		if (write(fp2, buffer, reading) != reading || fp2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
			exit(99);
		}
	}

	if (reading == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}

	if (close(fp) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}

	if (close(fp2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp2);
		exit(100);
	}
}
