#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be focused on
 * @c: character to look for
 * Return: pointer to the spot in which c is null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
