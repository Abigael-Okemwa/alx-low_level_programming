#include "main.h"
#include <stdio.h>
/**
 * _abs - for the absolute integer values
 * @n: the inegers to use
 * Return: int
 */

int _abs(int n)
{
	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
