#include "main.h"
#include <stdio.h>

/**
* swap_int - echange valeur de 2 entier
* @a : pointe 1er entier
* @b : pointe 2eme entier
* fonction qui echange les valeurs de 2 entiers
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
