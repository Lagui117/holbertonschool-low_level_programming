#include "functions_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Applique une fonction à chaque élément d'un tableau
 * @array: Le tableau d'entiers
 * @size: La taille du tableau
 * @action: Pointeur vers la fonction à appliquer à chaque élément
 *
 * Description:
 * Cette fonction parcourt le tableau et appelle la fonction 'action'
 * sur chaque élément
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

