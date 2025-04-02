#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to the doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
	return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}







