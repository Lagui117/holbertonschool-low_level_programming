#include <stddef.h>*
/**
 * int_index - Cherche un entier dans un tableau selon un critère
 * @array: Le tableau d'entiers
 * @size: Le nombre d'éléments dans le tableau
 * @cmp: Pointeur vers la fonction de comparaison (retourne 0 ou non)
 *
 * Return: L’indice du premier élément pour lequel cmp retourne non 0.
 *         -1 si aucun élément ne correspond ou si size <= 0.
 *
 * Description:
 * Parcourt le tableau et applique cmp() sur chaque élément.
 * Si cmp(element) retourne un résultat différent de 0, on retourne l’indice.
 */
 int int_index(int *array, int size, int (*cmp)(int))
{
	if ( size <= 0)
	return (-1)
	
	for(i = 0; i <= size ;i++)
		{	
		if (cmp(array[i]) != 0) 
			
		return (i);
		}
}
