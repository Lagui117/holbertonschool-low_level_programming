#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node to delete (starts at 0)
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Cas spécial : suppression de la tête */
	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	/* Parcours jusqu’au nœud précédent celui à supprimer */
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	/* Index invalide */
	if (tmp == NULL)
		return (-1);

	/* Déconnexion du nœud */
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp-

