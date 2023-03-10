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
        int a = 0, b = 0;

        while (src[b])
        {
                b++;
        }

        while (a < n && src[a])
        {
                dest[a] = src[a];
                a++;
        }

        while (a < n)
        {
                dest[a] = '\0';
                a++;
        }

        return (dest);
}
