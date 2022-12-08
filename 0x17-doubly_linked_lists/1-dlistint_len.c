#include "lists.h"

/**
 * dlistint_len - return number of elems in linked list
 * @h: head of linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
