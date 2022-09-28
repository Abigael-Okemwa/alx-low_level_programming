#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number that is to be used
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n);
	}

/**
 * _sqrt - returns the square of a root number
 * @n: the number to be tested
 * @x: the number that is squared
 * Return: the square root of n
 */
int _sqrt_recursion(int n, int x)
{
if (n > x / 2)
return (-1);
else if (n * n == x)
return (n);
return (_sqrt(n + 1, x));
}

