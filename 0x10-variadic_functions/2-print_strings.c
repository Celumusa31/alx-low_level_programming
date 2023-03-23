#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: Character to be checked
 * @n: Character to be checked
 *
 * Return: Always void (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;

	va_list variable_list;

	va_start(variable_list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(variable_list, char *);
		if (string == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", string);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(variable_list);
	printf("\n");
}
