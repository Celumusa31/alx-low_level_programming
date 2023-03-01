#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - Entry point
 * @dest: Character to be checked
 * @src: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always char (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, size_t n);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n, i++)
		dest[i] = '\0';
}

