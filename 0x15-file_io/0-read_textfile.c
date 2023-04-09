#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Entry point
 * @filename: Character to be checked
 * @letters: Character to be checked
 *
 * Return: Always number of letters (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, reading;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}

	reading = read(fp, buff, letters);
	write(STDOUT_FILENO, buff, reading);

	free(buff);
	close(fp);

	return (reading);
}
