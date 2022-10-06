#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
