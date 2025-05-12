#include "main.h"
#include <stddef.h>

/**
 * _strchr - trouve chaine de caractere
 * @s: chaine a trouver
 * @c: caractere a trouver
 * Return: si c est trouver, pointeur vers premiere instance
 *         NULL si rien trouver
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
