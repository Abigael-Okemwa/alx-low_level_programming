#include "main.h"

/**
 * _islower - to check whether ac is lowercase or not
 * The standard library provides a similar function
 * Return: 1 if it is in oercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
