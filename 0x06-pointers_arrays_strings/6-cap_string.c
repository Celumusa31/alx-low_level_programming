#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - Entry point
 * @str: Character to be checked
 *
 * Return: Always char (Success)
 */
char *cap_string(char *str)
{
	int i;

	for(i=0;i< i <= strlen(str); i++)
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] -32;
		}
	}
}
