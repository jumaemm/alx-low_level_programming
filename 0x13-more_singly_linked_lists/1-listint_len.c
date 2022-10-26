#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return number of elements in linked list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
