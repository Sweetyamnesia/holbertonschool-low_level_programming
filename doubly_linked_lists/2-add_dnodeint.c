#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the doubly linked list.
 * @n: the value to add to the doubly linked list.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
