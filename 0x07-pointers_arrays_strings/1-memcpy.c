#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @dest: destination of the memory we are moving
 * @src: memory we are copying
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
