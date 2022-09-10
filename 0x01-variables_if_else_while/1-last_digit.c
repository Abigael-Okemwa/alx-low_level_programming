#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Starting point
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n, las_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	las_dig = n % 10;
	if (las_dig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, las_dig);
	else if (las_dig == 0)
		printf("Last digit of %d is %d and is 0\n", n, las_dig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, las_dig);
	return (0);
}
