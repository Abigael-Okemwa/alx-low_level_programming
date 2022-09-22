#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string for comparison
 * @s2: the second string to be compared
 * Return: difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s2 && *s2 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
