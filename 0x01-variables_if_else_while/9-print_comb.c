#include <stdio.h>

/**
 * main - Starting point
 * prints all possible combinations of single-digit numbers
 * Return - Always 0 (Successful)
 */

int void main()
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

