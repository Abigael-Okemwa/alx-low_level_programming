#include "main.h"

/**
 * _isalpha - checks whether a character is part of alphabets
 * @c: for ascii value
 * Return: 1 if it is lowercase, if not then 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
