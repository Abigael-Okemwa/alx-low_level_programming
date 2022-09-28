#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, if not 0
 * @n: number to check
 * Return: return 1 if its a prime else return 0
 */

int is_prime_number(int n)
{
	int iterator;

	iterator = 2;
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (evaluate_num(n, iterator));
}
