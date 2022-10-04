#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments it receives
 * @argc: couts arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n = 0;

	if (argc > 0)
	{
		while n < argc)
		{
			printf("%s\n", argv[n]);
			n++;
		}
	}
	return (0);
}
