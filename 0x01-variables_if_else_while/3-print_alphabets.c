#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point
 * Return: Always 0 (End)
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(C);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
