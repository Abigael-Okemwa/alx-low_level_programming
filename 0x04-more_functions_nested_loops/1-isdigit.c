#include "main.h"

/**
 * _isdigit - check if a given value is a digit
 * @c: the assumed number
 * Return: 1 for digits otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
