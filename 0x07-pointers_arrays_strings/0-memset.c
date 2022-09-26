include "main.h"

/*
 * _memset -  function that fills memory with a constant byte
 * fills the first n bytes of the memory area pointed to by s
 * with the constant byte b
 * @n: number of bytes
 * @b: char to be used
 * @s: address for the memory block
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
