#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value it points
 * @ u: the value we will use
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int u;

	u = 402;
	printf("u = %d\n", u);
	reset_to_98(&u);
	printf("n = %d\n", u);
	return (0);
}
