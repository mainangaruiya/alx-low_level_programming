#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *f;

	if (nmemb == 0 || size == 0)
		return (NULL);
	f = malloc(nmemb * size);
	if (f == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		f[i] = 0;
	return (f);
}

