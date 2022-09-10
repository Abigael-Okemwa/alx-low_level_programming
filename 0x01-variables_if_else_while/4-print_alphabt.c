#include <stdio.h>

/**
 * main - Starting point
 * a program that prints the alphabet in lowercase
 * Return: Always 0 (Finish)
 */
int main(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
