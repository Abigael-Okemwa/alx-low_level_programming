#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: the string to focus on
 * @src: string to be appended
 * Return: a pointer to the string we focused on
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, destLen = 0;

	while (dest[index++])
		destLen++;
	for (index = 0; src[index]; index++)
		dest[destLen++] = src[index];
	return (dest);
}
