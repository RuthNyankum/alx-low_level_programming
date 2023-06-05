#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the data (n) 
* @head: first node
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
listint_t *new = head;
int t = 0;
if (head == NULL)
return (0);
while (new)
{
t += new->n;
new = new->next;
}
return (t);
}
