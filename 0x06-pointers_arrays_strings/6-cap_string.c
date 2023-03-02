#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - Entry point
 * @str: Character to be checked
 *
 * Return: Always str (Success)
 */
char *cap_string(char *str)
{
	size_t len = strlen(str);
	size_t i;

	for (i = 0; i < len; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z') {
		str[i] = str[i] - 'a' + 'A'; 
	}
	}
	return str;
}
