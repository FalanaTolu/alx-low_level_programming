#include "lists.h"

/**
* *insert_nodeint_at_index - inserts a new node at a given position
* @head: beginning of linked list
* @idx: index of the list where the new node should be added.
* Index starts at 0
* @n: value to add to list
* Return: address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *tmp = *head;

new = malloc(sizeof(listint_t));
if (new == NULL || head == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; tmp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = tmp->next;
tmp->next = new;
return (new);
}
else
tmp = tmp->next;
}

return (NULL);
}
