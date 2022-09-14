#include "main.h"

/**
 * print_alphabet - int_putchar()
 * Return: Always 0
 */

void print_alphabet(void)
{
	int f;

	for (f= 'a'; f <= 'z'; f++)
	{
		int_putchar(f);
	}
	int_putchar('\n');
}

