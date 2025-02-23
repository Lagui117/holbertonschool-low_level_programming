#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);   /* Test pour un nombre négatif */
    printf("%d\n", r);
    r = _abs(0);     /* Test pour zéro */
    printf("%d\n", r);
    r = _abs(1);     /* Test pour un nombre positif */
    printf("%d\n", r);
    r = _abs(-98);   /* Test pour un nombre négatif */
    printf("%d\n", r);
    return (0);
}

