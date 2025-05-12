#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - imprime somme de 2 diagonals ds matrice carre d entier
 * @a: pointeur vers 1er element de la matrice
 * @size: taille de la matrice
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
