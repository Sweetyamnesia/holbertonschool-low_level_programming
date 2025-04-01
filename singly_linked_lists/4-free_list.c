#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Fucntion that frees the linked list.
 * @head: Double pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	return;
	else
	{
		tmp = head;
		head = head->next;
		free(head->str);
		free(tmp);
	}
}
