#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: the string to be used
 * return: nothing
 */

void rev_string(char *s)
{
	int = i;
	int count = 0;
	char rvs = s[0];

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		rvs = s[i];
		s[i] = s[count];
		s[count] = rvs;
	}
}
