#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add-node - add a node to a singly linked list
 * @head: head of a singly linked list
 * @str: value of new nnode
 * Return: address of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	int length;
	char *new_str;
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length]; length++)
		;
	new_str = strdup(str);
	new_node->len = length;
	new_node->str = newStr;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
