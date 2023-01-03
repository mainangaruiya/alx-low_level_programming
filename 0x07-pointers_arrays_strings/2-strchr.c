#include "main.h"

/**
 * _strchr - function of a chararcter in a string
 * @s: returning a pointer to string
 * @c: character to return
 *
 * Return:pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)

			return (s + i);
	}
	if (*(s + i) == c)

		return (s + i);
	return (0);
}
