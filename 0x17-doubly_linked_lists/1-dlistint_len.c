#include "lists.h"

/**
* dlistint_len - returns the number of elements in a doubly linked list
* @h: pointer to the head of the list
* Return: number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}