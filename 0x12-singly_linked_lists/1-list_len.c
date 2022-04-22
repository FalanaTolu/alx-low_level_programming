#include "main.h"

/**
* list_len - returns the number of elements in a linked list_t list
* @h: the list_t list
* Return: number of elements in linked list h
*/

size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
i++;
h = h->next;
}
return (i);
}
