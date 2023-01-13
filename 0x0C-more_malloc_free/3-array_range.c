#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: first number
 * @max: second number
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int j, k;
	int *p;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	p = malloc(sizeof(int) * k);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < k; j++, min++)
	{
		p[j] = min;
	}
	return (p);
}
