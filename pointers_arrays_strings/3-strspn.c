#include "main.h"

/**
 * _strspn - donne longueur prefixe sous chaine
 * @s: chaine a scanner
 * @accept: chaine avec cara a verif
 * Description: donne longueur prefixe sous chaine
 * Return: resultat
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	int f;
	char *a;

	while (*s)
	{
		f = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				f = 1;
				break;
			}
		}
		if (f == 0)
		return (c);
		c++;
		s++;
	}
	return (c);
}
