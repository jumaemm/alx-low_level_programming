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
	char *newStr;
	list_t *newNode = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	if (newNode == NULL)
	{
		return (NULL);
	}
	for (length = 0; str[length]; length++)
		;
	newStr = strdup(str);
	newNode->len = length;
	newNode->str = newStr;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
