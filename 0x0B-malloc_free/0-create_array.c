#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, to specific char
 * @c: character to use
 * @size: size of the array
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int index;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		ar[index] = c;
	return (ar);
}
