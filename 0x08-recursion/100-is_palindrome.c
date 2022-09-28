#include "main.h"

/**
 * pal: palindrome
 * @s: pointer to a string
 * @l: position
 * Return: boolena
 */

int pal(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (pal(s + 1, l - 2));
	}
	return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: a pointer to a string
 * Return: recursion
 */

nt is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	return (pal(s, len - 1));
}
