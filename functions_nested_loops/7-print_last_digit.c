#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number to compute the last digit of.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;   /* Obtenir le dernier chiffre */
    if (last_digit < 0)     /* Si le dernier chiffre est négatif, le rendre positif */
        last_digit = -last_digit;
    
    _putchar(last_digit + '0');  /* Afficher le dernier chiffre */
    return (last_digit);         /* Retourner le dernier chiffre */
}

