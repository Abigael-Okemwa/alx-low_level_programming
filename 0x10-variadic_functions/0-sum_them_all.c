#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: the amount of arguments
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list allSum;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return(0);
	va_start(allSum, n);
	for (i = 0; i< n; i++)
		sum += va_arg(allSum, int);
	va_end(allSum);
	return (sum);
}
