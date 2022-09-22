#include "main.h"

/**
 * string_toupper - changes characters in a string from lowercase to uppercase
 * @c: the strings to be changed to uppercase
 * Return: a pointer to the string that has changed
 */

char *string_toupper(char *c)
{
	int index = 0;

	while (c[index])
	{
		if (c[index] >= 'a' && c[index] <= 'z')
		c[index] -= 32;
	index++;
	Return (c);

