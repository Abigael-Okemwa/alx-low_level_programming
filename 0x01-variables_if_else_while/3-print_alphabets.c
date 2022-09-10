#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point
 * return: Always 0 (End)
 */

int main(void)
{
	char d = 'a';
	char D = 'A';

	while (d <= 'z')
	{
		putchar(D);
		d++;
	}
	while (D <= 'Z')
	{
		putchar(D);
		D++;
	}
	putchar('\n');
	return (0)
}
