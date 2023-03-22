#include "function_pointers.h"

/**
 * print_name - Entyr point
 * @name: Charceter to be checked
 * @f: Character to be checked
 * Return: Always void (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
