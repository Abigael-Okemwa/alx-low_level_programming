#include "main.h"

/**
 * print_alphabet - the lowercase alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char f = 'a';
	int j;

	for (j = 0; j < 26; j++)
	{
		_putchar(f + j);
	}
	_putchar(10);
}
