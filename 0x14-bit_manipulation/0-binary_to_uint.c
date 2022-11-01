#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unt;
	int len, baset;

	if (!b)
		return (0);
	unt = 0;
	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, baset = 1; len >= 0; len--, baset *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			unt += baset;
		}
	}
	return (unt);
}
