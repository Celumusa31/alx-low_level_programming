#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	size_t i;

	for (i = 0; i < sizeof(c) - 1; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
