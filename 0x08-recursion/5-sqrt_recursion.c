#include "main.h"

/**
 * _sqrt - returns the square of a root number
 * @n: the number to be teste
 * @x: the number that is squared
 * Return: the square root of n
 */

int _sqrt(int n, int x)
{
	if (n * n ==x)
		return (n);
	if (n * n > x)
		return (-1);
	return (_sqrt(n + 1, x));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number that is to be used
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
