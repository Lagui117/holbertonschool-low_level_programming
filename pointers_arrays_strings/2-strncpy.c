#include "main.h"

/**
* _strncpy - copie une chaine
* @dest: destination de la chaine
* @src: source de la chaine
* @n: nombre max de bytes a copier
* Return: pointeur vers la destination de la chaine
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
