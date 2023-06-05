#include "lists.h"

/**
* get_nodeint_at_index - r a function that returns the nth node
* @head: first node
* @index: index
* Return: 0
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int t;
for (t = 0; t < index; t++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
