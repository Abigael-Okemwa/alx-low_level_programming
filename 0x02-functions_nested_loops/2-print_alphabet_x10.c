#include "main.h"

/**
 * void print_alphabet_x10 - ten times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int a,b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			int_putchar(b);
	}
	int_putchar('\n');
	}
}
