#include <stdio.h>

/**
 * main - Starting point
 * combinations of two two-digit numbers
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * printed with two digits. 1 should be printed as 01
 * separated by comma, followed by a space*
 * should be printed in ascending order
 * 00 01 and 01 00 are combination of the numbers 0 and 1 
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Always 0 (Finished)
 */

int main(void)
{
	int a, b;
	int c, d, e, f;

	for (a = 0; a < 100; a++)
	{
		c = a / 10;
		d = a % 10;

		for (b = 0; b < 100; b++)
		{
			e = b / 10;
			f = b % 10;
			if(c < e || (c == e && d < f))
			{
				putchar(c + '0');
				putchar(d + '0');
				putchar(32);
				putchar(e + '0');
				putchar(f + '0');
				if (!(c == 9 && d == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
