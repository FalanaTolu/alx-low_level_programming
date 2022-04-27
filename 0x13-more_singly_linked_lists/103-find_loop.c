#include "main.h"

/**
* *find_listint_loop - finds the loop in a linked list
* @head: beginning of linked list
* Return: address of the node where the loop starts, or NULL
* if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *start = head;
listint_t *stop = head;

if (head == NULL)
return (NULL);

while (start && stop && start->next)
{
start = start->next->next;
stop = stop->next;
if (start == stop)
{
stop = head;
while (stop != start)
{
stop = stop->next;
start = start->next;
}
return (start);
}
}

return (NULL);
}
