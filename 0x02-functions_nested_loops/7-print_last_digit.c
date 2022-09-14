#include "main.h"

/**
 * print_last_digit - prints the eng integer digit
 * @n: the integer itself
 * Return: int
 */

int print_last_digit(int n)
{
	int last_dig;

	if (n < 0)
	{
		last_dig = -1 * (n % 10);
		_putchar(last_dig + 48);
		return (last_dig);
	}
	else
	{
		last_dig = n % 10;
		_putchar(last_dig + 48);
		return (last_dig);
	}
}
