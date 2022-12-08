#include "lists.h"

/**
 * add_dnodeint_end - add node to end of linked list
 * @head: head of doubly linked list
 * @n: value of node to be added
 * Return: address of new node, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_node;

	current_node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (current_node->next)
	{
		current_node = current_node->next;
	}
	new_node->prev = current_node;
	new_node->next = NULL;
	current_node->next = new_node;

	return (new_node);
}
