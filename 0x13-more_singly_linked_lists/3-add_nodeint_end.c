#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add node to end of linked list
 * @head: head of linked list
 * @n: value of linke list node
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current_node;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next)
		{
			current_node =  current_node->next;
		}
		current_node->next = new_node;
	}
	return (*head);
}
