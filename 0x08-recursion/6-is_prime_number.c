#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, if not 0
 * @n: number to check
 * Return: return 1 if its a prime else return 0
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, start));
}
/**
 * is_prime - returns 1 when its prime
 * @n: number to be checked
 * @start: number to start checking from
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start -1));
}
