#include "lists.h"

/**
* *add_nodeint_end - adds a new node at the end of a listint_t list
* @head: beginning of singly-linked list
* @n: value to add
* Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *tmp;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

*tmp = *head;
while (tmp->next)
tmp = tmp->next;

tmp->next = new;

return (new);
}
