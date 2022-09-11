#include <stdio.h>

/**
 * main - Startingpoint
 *  a program that prints all single digit numbers of base 10 starting from 0
 *  Return: Always 0 (Succeeded)
 */
int main(void)
{
	int z = 28;

	while (z < 38)
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
