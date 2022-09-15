#include "main.h" 

/**
 * main - check the code
 * Description:  function that prints the n times table, starting with 0
 * Return: void if n is greater than 15 or less than 0
 */

void print_times_table(int n)
{
	int n, i;
	printf("Enter an integer: ");
	for (i = 1; i <= 10; ++i)
	{
		printf("%d * %d = %d \n", n, i, n * i);
	}
}
