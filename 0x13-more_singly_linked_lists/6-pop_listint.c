#include "lists.h"

/**
* pop_listint - a function that deletes the head node
* @head: pointer
* Return: 0
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int t;
if (*head == NULL)
return (0);
temp = *head;
t = (*head)->n;
*head = (*head)->next;
free(temp);
return (t);
}
