#include <stdio.h>

/**
 * main - Startoff
 * prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);
	}
	for (s= 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
	putchar('\n');
	return (0);
}
