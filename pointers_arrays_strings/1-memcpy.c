#include "main.h"

/**
 * _memcpy - copie zone de memoire
 * @dest: pointeur vers destination zone memoire
 * @src: pointeur vers la source de memoire
 * @n: nombre de bytes a copier
 * Return: pointeur vers destination
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
