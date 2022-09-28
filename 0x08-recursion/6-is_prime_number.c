#include "main.h"

/**
 * prime_number - returns 1 if the input integer is a prime number, if not 0
 * @a: number to check
 * @b: possible prime number
 * Return: return 1 if its a prime else return 0
 */

int prime_number(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (prime_number(a + 1, b));
}

/**
 * is_prime_number - returns 1 when its prime
 * @n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_number(2, n));
}
