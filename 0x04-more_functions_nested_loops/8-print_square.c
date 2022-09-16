#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 * Return: returns nothing
 */

void print_square(int size)
{
	int sq1, sq2;

	if (size > 0)
	{
		for (sq1 = 0; sq1 < size; sq1++)
		{
			for (sq2 = 0; sq2 < (size - 1); sq2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}

	}
	else
	{
		putchar('\n');
	}
}
