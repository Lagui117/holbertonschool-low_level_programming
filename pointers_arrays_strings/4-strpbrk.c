#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strpbrk - cherche octet dans chaine de caractere
 * @s: chaine a verifier
 * @accept: chaine contenant octet a chercher
 * Return: pointer vers octet de s correspondant,
 *         NULL si rien trouver
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return (s + i);
		}
	}
	return (NULL);
}
