#include <studio.h>

/**
 * main - Starting point
 * prints the size of various types on the computer it is compiled and run on
 * Return: Always (0)
 */

int main(void)
{
	char c;
	int i;
	long int a;
        long long int b;
	float f;

	printf("size of a char: %b byte(s)\n", sizeof(c);
	printf("size of an int: %b byte(s)\n", sizeof(i);
	printf("size of a long int: %b byte(s)\n", sizeof(a);
	printf("size of a long long int: %b byte(s)\n", sizeof(b);
	printf("size of a float: %b byte(s)\n", sizeof(f);
	return (0);
}
