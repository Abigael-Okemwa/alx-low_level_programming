#include "main.h"

/**
 * print_alphabet - function to print loer case alphabets
 * Return: Always 0
 */

void print_alphabet(void)
{
	int f;

	for (f= 'a'; f <= 'z'; f++)
	{
		int_putchar(f);
	}
	_putchar('\n');
}

