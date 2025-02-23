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

    r = print_last_digit(98);  /* Test pour un nombre positif */
    printf("%d\n", r);         /* Affiche le dernier chiffre */
    r = print_last_digit(0);   /* Test pour zéro */
    printf("%d\n", r);         /* Affiche le dernier chiffre */
    r = print_last_digit(-102);/* Test pour un nombre négatif */
    printf("%d\n", r);         /* Affiche le dernier chiffre */
    return (0);
}

