#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the program name
 * @argc: number of commandline arguments
 * @argv: vector arguments for string pointers
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
