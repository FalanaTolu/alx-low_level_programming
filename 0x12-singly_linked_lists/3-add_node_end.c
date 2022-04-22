#include "lists.h"

/**
* *add_node_end - adds a new node at the end of a list_t list
* @head: linked list
* @str: string to be added to list
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *i;
list_t *j = *head;
unsigned int len = 0;

while (str[len])
len++;

i = malloc(sizeof(list_t));
if (!i)
return (NULL);

i->str = strdup(str);
i->len = len;
i->next = NULL;

if (*head == NULL)
{
*head = i;
return (i);
}

while (j->next)
j = j->next;

j->next = i;

return (i);
}
