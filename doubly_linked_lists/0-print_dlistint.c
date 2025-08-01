#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - affiche tous les éléments d'une liste dlistint_t
 * @h: pointeur vers la tête de la liste
 *
 * Return: nombre total de nœuds
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

