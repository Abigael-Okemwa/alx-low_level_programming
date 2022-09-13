#include "main.h"

/**
 * print_alphabet - function to print loer case alphabets
 * Return: Always 0
 */

int print_alphabet(void)
{
	char f;

	for (f= 'a'; f <= 'z'; f++)
	{
		_putchar(f);
	}
	_putchar('\n');
}

