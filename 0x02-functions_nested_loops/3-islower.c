#include "main.h"
/**
 * print _islower - Entry point
 *
 * Return: Always 1 (Success)
 * Return: Always 0 (Success) if otherwise
 */
int _islower(int c)
{
	int c; 

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
