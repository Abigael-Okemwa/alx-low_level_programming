#include <stdio.h>

/**
 * main - starting point
 * program that prints all possible different combinations of three digits
 * Numbers must be separated by ,, followed by a space
 * 012, 120, 102, 021, 201, 210 are considered the same as the three digits 0, 1 and 2
 *
 * Print only the smallest combination of three digits
 *
 * Numbers should be printed in ascending order, with three digits
 *
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *
 * You can only use putchar six times maximum in your code
 *
 * You are not allowed to use any variable of type char
 *
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48, b = 48, c = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a != b && b != c && a != c && a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 55 && b == 56 && c == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

