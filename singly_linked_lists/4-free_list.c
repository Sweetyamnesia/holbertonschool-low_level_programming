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
	if (head == NULL)
	return;
	else
	{
		free(head->str);
		free(head);
	}
}
