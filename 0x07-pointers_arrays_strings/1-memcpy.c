#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area where the copies will go to
 * @src: momory area from
 * @n: number of bytes that are to be copied
 * Return: dest, pointer to be copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
