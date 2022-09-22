#include "main.h"

/**
 * string_toupper - changes characters in a string from lowercase to uppercase
 * @str: the strings to be changed to uppercase
 * Return: a pointer to the string that has changed
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
		i++;
	}
	Return(str);
}
