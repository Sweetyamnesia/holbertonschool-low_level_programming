#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: pointer to the structure.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	const list_t *current = h;

	if (h == NULL)
	printf("[0] (nil)");
	return (0);

	while (current != NULL)
	{
		printf("[");

		if (current->str != NULL)
			printf("prev");

		else
			printf("NULL");
			printf("[%u] ", current->len);
			printf("][%s][", current->str);
			count++;

		if (current->next != NULL)
			printf("next");

		else
			printf("NULL");
			printf("]");

			if (current->next != NULL)
			printf("<->");
			count++;

			current = current->next;
		}
		printf("\n\n");

		return (count);
	}
