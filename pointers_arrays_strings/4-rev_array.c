#include "main.h"

/**
* reverse_array - met a l envers contenu d1 tableau d entiers
*@a: tableau a retourner
*@n: nombre elements du tableau
*/

void reverse_array(int *a, int n)
{
int temp, i;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
