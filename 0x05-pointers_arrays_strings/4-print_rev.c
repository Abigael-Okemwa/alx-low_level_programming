#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: the string to be used
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
