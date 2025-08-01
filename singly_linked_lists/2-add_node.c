#include <stdlib.h>
#include "lists.h"

/**
 * add_node - ajoute un nouveau nœud au début d'une liste list_t
 * @head: double pointeur vers la tête de la liste
 * @str: chaîne à mettre dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0, i;

	if (str == NULL || head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Calcul manuel de la longueur */
	while (str[len] != '\0')
		len++;

	/* Allocation mémoire pour la copie de str */
	new_node->str = malloc(len + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Copie manuelle caractère par caractère */
	for (i = 0; i < len; i++)
		new_node->str[i] = str[i];
	new_node->str[i] = '\0'; /* Null-terminate la chaîne */

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

