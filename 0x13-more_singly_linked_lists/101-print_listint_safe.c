#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list
* @head: beginning of linked list
* Return: number of nodes in the list or 98 if the function fails
*/

size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
long int j;

while (head)
{
j = head - head->next;
i++;
printf("[%p] %d\n", (void *)head, head->n);
if (j > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (i);
}
