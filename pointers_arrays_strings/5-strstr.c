#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - localise une sous chaine
 * @haystack: chercher dans cet chaine
 * @needle: sous chaine a trouver
 * Return: pointeur vers debut sous chaine
 *         NULL si sous chaine non trouver
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				break;
			}
			if (needle[j] == '\0')
			return (haystack + i);
		}
	}
	return (NULL);
}
