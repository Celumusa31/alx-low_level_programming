#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Entry point
 * @dest: Character to be checked
 * @src: Character to be checked
 *
 * Return: Always dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
