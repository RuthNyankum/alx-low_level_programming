#include "lists.h"
/**
* insert_nodeint_at_index - a function that inserts a new
* node at a given position.
* @head: pointer
* @idx: index
* @n: int
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *temp = *head, *half;
unsigned int t;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}
for (t = 0; t + 1 < idx; t++)
{
if (temp->next == NULL)
{
return (NULL);
}
temp = temp->next;
}
half = temp->next;
temp->next = node;
node->next = half;
return (node);
}
