#include "main.h"

/**
 * _strncpy - copies a string.
 * @src: the source of a string
 * @n: maximum bytes copied from the source
 * @dest: abuffer that stores the copy
 * Return: pointer to the string that results
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, srcLen = 0;

	while (src[index++])
		srcLen++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = srcLen; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
