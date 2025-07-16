#include "3-calc.h"

/**
 * op_add - Calcule la somme de deux entiers
 * @a: Premier entier
 * @b: Deuxième entier
 *
 * Return: La somme de a et b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calcule la différence entre deux entiers
 * @a: Premier entier
 * @b: Deuxième entier
 *
 * Return: La différence de a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Calcule le produit de deux entiers
 * @a: Premier entier
 * @b: Deuxième entier
 *
 * Return: Le produit de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Calcule la division entière de deux entiers
 * @a: Numérateur
 * @b: Dénominateur
 *
 * Return: Le quotient de a divisé par b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calcule le reste de la division entière
 * @a: Numérateur
 * @b: Dénominateur
 *
 * Return: Le reste de a divisé par b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
