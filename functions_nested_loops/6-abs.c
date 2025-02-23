#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 * @n: The integer to compute the absolute value of.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
    if (n < 0)        /* Si n est négatif, renvoie sa valeur positive */
        return (-n);
    else
        return (n);   /* Si n est positif ou zéro, renvoie n */
}
