#include "lists.h"

/**
* free_list - frees a list_t list
* @head: linked list to be freed
*/

void free_list(list_t *head)
{
list_t *i;

while (head)
{
i = head->next;
free(head->str);
free(head);
head = i;
}
}
