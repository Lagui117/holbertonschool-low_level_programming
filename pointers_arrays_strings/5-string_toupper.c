#include "main.h"

/**
* string_toupper - change minuscule en majuscule d1 chaine
*@str: chaine a modifier
* Return: pointeur vers la ligne modifier
*/

char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
