#include "lists.h"

/**
* sum_listint - finds the sum of all the data (n) of a listint_t
* linked list
* @head: beginning of linked list
* Return: the sum of all the data (n) of the list or 0 if the list is empty
*/

int sum_listint(listint_t *head)
{
int sum;

sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
