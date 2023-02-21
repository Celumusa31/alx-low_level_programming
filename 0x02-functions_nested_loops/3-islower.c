#include "main.h"
/**
 * print_islower - Entry point
 *
 * Return: Always 1 (Success)
 * Return: Always 0 (Success) if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
