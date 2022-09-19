#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) = '\0')
	{
		if (i % 2 ==0)
			putchar(*(str + i));
		i++;
	}
	putchar (10);
}
