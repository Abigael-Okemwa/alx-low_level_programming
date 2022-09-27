#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to focus on
 * @accept: string to check against
 * _strpbrk() function locates the first occurrence in the string s
 * Return: a pointer to the byte in s 
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
