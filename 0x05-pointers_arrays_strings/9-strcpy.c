#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @src: the pointer to origin
 * @dest: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int cpy = 0;

	while (*(src + cpy) != '\0')
	{
		*(dest + cpy) = *(src + cpy);
		cpy++;
	}
	*(dest + cpy) = '\0';
	return (dest);
}
