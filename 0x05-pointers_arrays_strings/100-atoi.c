#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: convert pointer
 * Return: an integer
 */

int _atoi(char *s)
{
	int u = 0;
	int min = 1;
	int str = 0;
	unsigned int uns = 0;

	while (s[u])
	{
		if (s[u] == 45)
		{
			min *= -1;
		}
		while (s[u] >= 48 && s[u] <= 57)
		{
			str = 1;
			uns = (uns * 10) + (s[u] - '0');
			u++;
		}
		if (str == 1)
		{
			break;
		}
		u++;
	}
	uns *= min;
	return (uns);
}
