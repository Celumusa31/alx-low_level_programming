#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - Entry point
 * @s: Character to be checked
 * @b: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always pointer (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
        memset(s, b, n * sizeof(s[n]));
        return (s);
}
