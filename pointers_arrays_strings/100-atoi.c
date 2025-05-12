#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
* _atoi - convertit une chaine en entier
*@s: chaine a convertir
* Return: entier convertit
*/

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit;
int started = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
started = 1;
digit = *s - '0';
if (result > (INT_MAX - digit) / 10)
return ((sign == 1) ? INT_MAX : INT_MIN);
result = result * 10 + digit;
}
else if (started)
break;
s++;
}
return (result  *sign);
}
