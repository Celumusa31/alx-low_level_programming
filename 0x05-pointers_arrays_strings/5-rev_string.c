#include "main.h"
#include <stdio.h>
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: Always void (Success)
  */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = sizeof(s);

	begin = s;
	end = s;

	for ( c = 0 ; c < ( length - 1 ) ; c++ )
	end++;

	for ( c = 0 ; c < length/2 ; c++ )
	{
	temp = *end;
	*end = *begin;
	*begin = temp;

	begin++;
	end--;
	}
}
