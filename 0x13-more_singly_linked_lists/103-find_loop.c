#include "main.h"

/**
* *find_listint_loop - finds the loop in a linked list
* @head: beginning of linked list
* Return: address of the node where the loop starts, or NULL
* if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
if (!head)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}
