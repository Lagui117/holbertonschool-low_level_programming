#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Emule une calculatrice en ligne de commande
 * @argc: Nombre d'arguments passés au programme
 * @argv: Tableau de chaînes représentant les arguments
 *
 * Return: 0 en cas de succès, ou un code d'erreur spécifique
 *         98 si nombre d'arguments invalide
 *         99 si l’opérateur est invalide
 *         100 si division par 0
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);
}
