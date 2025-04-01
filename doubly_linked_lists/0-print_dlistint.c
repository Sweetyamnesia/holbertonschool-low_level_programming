#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: the pointer to the doubly linked list.
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		if (current->n >= 0)
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}



