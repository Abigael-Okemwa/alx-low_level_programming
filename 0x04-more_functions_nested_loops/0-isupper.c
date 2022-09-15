#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the tested on character
 * Return: 1 if c is upercase otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z))
	{
		return (1);
	}
	return (0);
}
