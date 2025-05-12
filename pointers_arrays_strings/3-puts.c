#include "main.h"
#include <stdio.h>

/**
* _puts - imprime une chaine suivi saut de ligne sur stdout
*@str: chaine a imprimer
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
