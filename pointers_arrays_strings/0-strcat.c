#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - Appends the `src` string to the `dest` string
 * @dest: Destination string
 * @src: Source string
 * Return: Destination pointer
 */
char *_strcat(char *dest, char *src)
{
	int dI = 0, sI = 0;

	while (dest[dI] != '\0')
		dI++;

	while (src[sI] != '\0')
	{
		dest[dI + sI] = src[sI];
		sI++;
	}

	return (dest);
}
