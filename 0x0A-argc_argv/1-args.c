#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of commandline arguments
 * @argv: argument vector of pointers to strings
 * Return: always 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("d\n", argc - 1);
	return (0);
}
