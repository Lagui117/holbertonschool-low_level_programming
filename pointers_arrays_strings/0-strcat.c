#include "main.h"
#include <stdio.h>

/**
* _strcat - concatene 2 chaine de caractere
*@dest: destination de la chaine
*@src: source de la chaine
* Return: pointeur vers la destination
*/


char *_strcat(char *dest, char *src)
{
char *original_dest = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (original_dest);
}
