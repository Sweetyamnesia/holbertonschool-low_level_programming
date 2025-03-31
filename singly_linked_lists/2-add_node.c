#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	int i = 0;
	int len = 0;
	char *str2 = NULL;

	if (head == NULL || str == NULL)
	return (NULL);

	while (str[len])
	{
		len++;
	}

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
	return (NULL);

	str2 = malloc(sizeof(char) * (len + 1));
	if (str2 == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	str2[i] = str[i];
	str2[i] = '\0';

	return (add_node);

}
