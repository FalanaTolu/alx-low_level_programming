#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: beginning of list to be freed
*/

void free_listint(listint_t *head)
{
if (head == NULL)
return;
free_listint(head->next);
free(head);
}
