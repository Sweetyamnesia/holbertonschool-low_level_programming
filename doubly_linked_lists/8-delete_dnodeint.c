#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the doubly linked list.
 * @index: index of the list.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (head == NULL)
	return (-1);

	for (i = 1; current != NULL && i < index; ++i)
	{
		current = current->next;
	}

	if (current == NULL)
	return (-1);

	if (current->prev != NULL)
	current->prev->next = current->next;

	if (current->next != NULL)
	current->next->prev = current->prev;

	if (*head == current)
	head = &current->next;

	return (1);
}
