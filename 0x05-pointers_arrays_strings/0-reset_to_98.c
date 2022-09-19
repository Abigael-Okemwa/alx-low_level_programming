#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - updates the value it points
 * @ n: the value we will use
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int n;

	n = 402;
	printf("u = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (98);
}
