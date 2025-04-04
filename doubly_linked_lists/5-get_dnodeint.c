#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the doubly linked list.
 * @index: index of the node
 * Return: NULL if the node doesn't exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	if (i == index)
	{
		return (head);
	}

	return (NULL);

}
