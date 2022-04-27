#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list,
*  and returns the head node’s data (n)
* @head: beginning of list
* Return: the head node’s data (n) or 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
listint_t *tmp;
int i;

if (head == NULL || *head == NULL)
return (0);

i = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;

return (i);
}
