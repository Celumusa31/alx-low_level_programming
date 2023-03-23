#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * @separator: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list variable_list;

	va_start(variable_list, n);

	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator != NULL)
		{
			printf("%d%s", va_arg(variable_list, int), separator);
		}
		else
		{
			printf("%d", va_arg(variable_list, int));
		}

	}

	va_end(variable_list);
	printf("\n");
}
