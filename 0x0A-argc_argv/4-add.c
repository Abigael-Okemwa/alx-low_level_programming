#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	int a = 0, b, c;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c]; c++)
		{
			if (isdigit(argv[b][c]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (b = 1; b < argc; b++)
	{
		a += atoi(argv[b]);
	}
	printf("%d\n", a);
}
