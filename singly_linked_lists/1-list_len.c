#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list.
 * @h: pointer to the structure.
 * Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current = h;

	if (current->str != NULL)
	count++;
	current = current->next;
	return (count);
}
