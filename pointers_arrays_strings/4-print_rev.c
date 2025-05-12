#include "main.h"
/**
* print_rev - imprime une chaine en sens inverse
*@s: la chaine a imprimer
*/

void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
_putchar(s[i]);
_putchar('\n');
}
