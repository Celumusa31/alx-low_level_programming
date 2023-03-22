#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: Charceter to be checked
 * @f: pointer function
 *
 * Return: Always void (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
