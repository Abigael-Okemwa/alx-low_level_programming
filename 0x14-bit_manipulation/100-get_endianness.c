#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, if small endian 1.
 */

int get_endianness(void);
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;
	return ((int)*c);
}

