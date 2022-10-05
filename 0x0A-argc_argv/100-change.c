#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change for an amount of money
 * @argc: the number of arguments supplied
 * @argv: an array that points the arguments
 * Return: always tru
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return(1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 10) >= 0)
	}
}
