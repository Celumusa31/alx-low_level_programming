#include "main.h"

/**
 * _strlen - Entry point
 * @s: Character to be checked
 *
 * Return: Always integer (Success)
 */
int _strlen(char *s)
{
	int strlen = 0;

	while(*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
