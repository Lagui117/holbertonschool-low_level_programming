#include "main.h"
/**
* _strcmp - compare 2 chaine
* @s1: 1ere chaine
* @s2: 2eme chaine
* Return: 0 si s1 et s2 sont =
*         valeur negative si s1 inferieur a s2
*         vlaeur positive si s1 plus grand que s2
*/

int _strcmp(char *s1, char *s2)
{int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (0);
i++;
}
return (s1[i] - s2[i]);
}
