#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: string to be used
 * _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str
 * Return: NULL if there is an error
 */

char *_strdup(char *str)
{
	char *dup;
	int index, len;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
	{
		dup[index] = str[index];
	}
	dup[len] = '\0';
	return (dup);
}
