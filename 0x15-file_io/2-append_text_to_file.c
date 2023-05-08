#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: Character to be checked
 * @text_content: Character to be checked
 *
 * Return: Always int (Success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, writing;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	writing = write(fp, text_content, length);

	if (fp == -1 || writing == -1)
		return (-1);

	close(fp);

	return (1);
}
