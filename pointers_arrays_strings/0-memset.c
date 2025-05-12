#include "main.h"

/**
 * _memset - remplit memoire avec octet constant
 * @s: pointeur vers zone memoire a remplir
 * @b: octet constant a placer
 * @n: nombre octet a remplir
 * Return: pointeur vers zone memoire s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
