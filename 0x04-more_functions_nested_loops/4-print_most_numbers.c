#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * except 2 and 4
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			putchar(n + '0');
	}
	putchar('\n');
}
