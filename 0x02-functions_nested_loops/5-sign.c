#include "main.h"

/**
 * print_sign - it prints a number's sign
 * @n: an integer, positive, negative or zero
 * Return: 1 if it is positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
