#include <stdio.h>

/**
 * main - startingPoint
 * prints all possible different combinations of two digits
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int a = 48, b = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (!(a == 56 && b == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
