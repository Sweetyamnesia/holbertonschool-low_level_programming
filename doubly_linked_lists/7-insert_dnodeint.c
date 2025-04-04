#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the doubly linked list.
 * @idx: index of the list.
 * @n: the value to add.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (h == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; current != NULL && i < idx - 1; ++i)
	current = current->next;

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;
	new_node->next = current->next;
	current->next = new_node;

	if (new_node->next != NULL)
	new_node->next->prev = new_node;
	return (new_node);
}
