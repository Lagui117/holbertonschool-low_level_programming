#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * @dest: Destination of memory area
 * @src: Source of memory area
 * @n: AMount of bytes from memory area
 * Return: Destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
