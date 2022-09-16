#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - diagonal line on the terminal
 * @n: number of times the character
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int le, sps;

	if (n > 0)
	{
		for (le = 0; le < n; le++)
		{
			for (sps = 0; sps < le; sps++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
