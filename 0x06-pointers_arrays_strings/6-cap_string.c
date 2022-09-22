#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: str
 */

char *cap_string(char *)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[inde] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				stir[index - 1] == '\t' ||
				stir[index - 1] == '\n' ||
				stir[index - 1] == ',' ||
				stir[index - 1] == ';' ||
				stir[index - 1] == '.' ||
				stir[index - 1] == '!' ||
				stir[index - 1] == '?' ||
				stir[index - 1] == '"' ||
				stir[index - 1] == '(' ||
				stir[index - 1] == ')' ||
				stir[index - 1] == '{' ||
				stir[index - 1] == '}' ||
				index == 0)
			stir[index] -= 32;
		index++;
	}
	return(str);

