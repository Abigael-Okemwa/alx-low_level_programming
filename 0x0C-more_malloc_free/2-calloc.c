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
	char *memb;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return(NULL);
	memb = malloc(size * nmemb);
	if (memb == NULL)
		return (NULL);

	for (index = 0; index < (size * nmemb); index++)
		memb[index] = 0;
	return (meb);
}
