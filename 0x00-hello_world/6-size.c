#include <stdio.h>

/**
 * Main - Starting point
 * a C program that prints the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("size of char: %b byte(s)\n", sizeof(c));
	printf("size of int: %b byte(s)\n", sizeof(i));
	printf("size of long int: %b byte(s)\n", sizeof(a));
	printf("size of long long int: %b byte(s)\n", sizeof(b));
	printf("size of float: %b byte(s)\n",sizeof(f));
	return (0);
}

