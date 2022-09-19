#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str:acts as a string
 * Return: nothing
 */

void puts2(char *str)
{
	int s = 0;

	while (*(str + s) != '\0')
	{
		if (s % 2 == 0)
			putchar(*(str + s));
		s++;
	}
	putchar(10);
}
