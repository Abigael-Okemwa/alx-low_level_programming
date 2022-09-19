#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @str: the string to be used
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(str + len));
	putchar(10);
}
