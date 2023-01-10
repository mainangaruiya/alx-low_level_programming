#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concanates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *t;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	t = malloc(k * sizeof(char));
	if (t == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		t[l] = s1[l];
	for (l = 0; l < j; l++)
		t[l + i] = s2[l];
	t[i + j] = '\0';
	return (t);
}
