#include "main.h"

/**
* cap_string - capitalise touts mots d1 chaine
*@str: chaine a modifier
* Return: pointeur vers chaine modifier
*/

char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;
while  (str[i] != '\0')
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
capitalize_next = 0;
switch (str[i])
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
capitalize_next = 1;
break;
}
i++;
}
return (str);
}
