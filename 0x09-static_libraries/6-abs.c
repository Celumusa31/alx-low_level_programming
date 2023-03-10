#include "main.h"
/**
 * _abs - Entry points
 * @n: The character to be checked
 * Return: Always return absolute value of n  (Success)
 */
int _abs(int n)
{
        if (n < 0)
        {
                n = (-1) * n;
                return (n);
        }
        else
        {
                return (n);
        }
}
