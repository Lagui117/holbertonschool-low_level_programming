#include "main.h"
#include <stdio.h>

/**
* _strlen - affiche longueur d une chaine
*@s: pointeur de la chaine
* Return: longueur de la chaine
*/

int _strlen(char *s)
{
int lenght = 0;
while (*s != '\0')
{
lenght++;
s++;
}
return (lenght);
}
