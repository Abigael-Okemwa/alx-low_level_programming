#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string, followed by a new line
 * @str: represent our string
 * Return: no error (success)
 */

void _puts(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{putchar(*(str + j));
		j++;
	}
	putchar (10);
}
