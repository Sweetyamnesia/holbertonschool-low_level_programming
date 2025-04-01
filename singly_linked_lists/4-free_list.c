#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Function that frees the linked list.
 * @head: Pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
