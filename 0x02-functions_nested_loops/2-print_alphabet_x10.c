#include "main.h"

/**
 * void print_alphabet_x10 - prints the alphabet ten times
 * Description: 'prints 10 times the alphabets'
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
