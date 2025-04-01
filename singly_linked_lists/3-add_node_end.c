#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node, *temp;
	int len = 0;
	
	if (str == NULL)
	return (NULL);

	while (str[len])
	{
		len++;
	}

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
	return (NULL);

	add_node->str = strdup(str);
	if (add_node->str == NULL)
	{
		free(add_node);
		return (NULL);
	}

	add_node->len = len;
	add_node->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = add_node;

	return (add_node);

}
