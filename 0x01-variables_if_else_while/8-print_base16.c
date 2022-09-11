#include <stdio.h>

/**
 * main - Startoff
 * prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int b = 48;
	char s = 'a';

	while (b < 58)
	{
		putchar(b);
		b++;
	}
	while (s <= 't')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
