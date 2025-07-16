#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Sélectionne la fonction correcte
 * @s: L’opérateur sous forme de chaîne (ex: "+", "-", "*", "/", "%")
 *
 * Return: Un pointeur vers la fonction correspondant à l’opérateur.
 *         NULL si l’opérateur ne correspond à aucune opération connue.
 *
 * Description:
 * Cette fonction compare la chaîne `s` aux opérateurs connus
 * et retourne un pointeur vers la fonction associée à cet opérateur.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 4)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);

		i++;
	}
	return (NULL);
}
