#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: beginning of list to be freed
*/

void free_listint2(listint_t **head)
{
if (head == NULL)
return;
free_listint((*head)->next);
free(*head);
*head = NULL;
}
