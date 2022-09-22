#include "main.h"

/**
 * string_toupper - changes characters in a string from lowercase to uppercase
 * @str: the strings to be changed to uppercase
 * Return: a pointer to the string that has changed
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
	index++;
	}
	Return (str);
}
