#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: represents the string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int str = 0;

	while (*(s + str) != '\0')
		str++;
	return (str);
}
