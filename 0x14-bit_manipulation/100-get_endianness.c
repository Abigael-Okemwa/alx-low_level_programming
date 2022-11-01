#include 'main.h'

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, otherwise 1.
 */

int get_endianness(void);
{
	unsigned int u;
	char *h;

	u = 1;
	h = (char *) &u;
	return ((int)*h);
}

