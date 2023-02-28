#include "main.h"
/**
 * _strcpy - Entry point
 * @dest: Character to be checked
 * @src: Character to be checked
 * Return: Always dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	{
		dest[i++] = '\0';
	}
	return (dest);
}
