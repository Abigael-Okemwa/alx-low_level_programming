#include <stdio.h>

/**
 * main - Starting point
 * Return: Always 0 (Successfully)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
