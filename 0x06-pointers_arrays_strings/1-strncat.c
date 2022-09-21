#include "main.h"

/**
 * _strncat - concatenates two strings
 * will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: the string in which appending will occur
 * @c: number of bytes from src
 * @src: to be appended to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0; destLen = 0;

	while (dest[index++])
		destLen++;
	for (index = 0; src[index] && index < n; index++)
		dest[destLen++] = src[index];
	return (dest);
}
