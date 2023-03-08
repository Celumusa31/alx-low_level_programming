#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - Entry point
 * @x: Character to be checked
 * @y: Character to be checked
 *
 * Return: Always int (Success)
 */
int _pow_recursion(int x, int y)
{
	int answer = pow(x, y);
	
	if (y >= 0)
		return (answer);

	else
		return (-1);
}
