#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: pointer to a character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int sz1 = 0, sz2 = 0, 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[sz1] != '\0')
	{
		sz1++;
	}
	while (s2[sz2] != '\0')
	{
		sz2++;
	}
	if (n > sz2)
		n = sz2;
	p = malloc((sz1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	for (c = 0; c < sz1; c++)
	{
		p[c] = s1[c];
	}
	for (; c < (sz1 + n); c++)
	{
		p[c] = s2[c - sz1];
	}
	p[c] = '\0';
	return (p);
}
