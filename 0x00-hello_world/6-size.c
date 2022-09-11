#include <stdio.h>

/**
 * Main - Starting point
 * a C program that prints the size of various types
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %s byte(s)\n", sizeof(a));
	printf("size of an int: %s byte(s)\n", sizeof(b));
	printf("size of a long int: %s byte(s)\n", sizeof(c));
	printf("size of a long long int: %s byte(s)\n", sizeof(d));
	printf("size of a float: %s byte(s)\n", sizeof(e));
	return (0);
}

