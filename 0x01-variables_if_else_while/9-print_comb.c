#include <stdio.h>

/**
 * main - Starting point
 * prints all possible combinations of single-digit numbers
 * Return - Always 0 (Successful)
 */

int main(void)
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
		c++;
	}
	putchar('\n');
	return (0);
}

