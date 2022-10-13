#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates division of a by b
 * @a: first integer
 * @b: second integer
 * Return: division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder from division
 * @a: first integer
 * @b: second integer
 * Return: the remainder after division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
