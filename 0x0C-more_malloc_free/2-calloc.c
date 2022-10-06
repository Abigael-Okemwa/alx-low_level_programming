#include <"main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmeb: the number of elements
 * @size: the byte size of each array element
 * Return: if nmeb is 0, then calloc returns NULL
 * if malloc fails then calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *memb;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return(NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL);
	memb = mem;
	for (index = 0; index < (size * nmemb); index++)
		memb[index] = '\0';
	return (mem);
}
