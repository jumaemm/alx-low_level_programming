#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - add a node to the end of a linked list
 * @head: headof singly linked list
 * @str: string value of new node
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	char *new_string;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length]; length++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_string = strdup(str);
	new_node->len = length;
	new_node->str = new_string;
	new_node->next = NULL;

	if (head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (*head);
}
