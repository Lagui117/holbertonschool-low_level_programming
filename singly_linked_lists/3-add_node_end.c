#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - ajoute un nouveau nœud à la fin d'une liste list_t
 * @head: double pointeur vers le début de la liste
 * @str: chaîne de caractères à copier dans le nouveau nœud
 *
 * Return: adresse du nouveau nœud, ou NULL en cas d’échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0, i;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Calcul manuel de la longueur */
	while (str[len] != '\0')
		len++;

	/* Allocation et copie manuelle de la chaîne */
	new_node->str = malloc(len + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		new_node->str[i] = str[i];
	new_node->str[i] = '\0';

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

