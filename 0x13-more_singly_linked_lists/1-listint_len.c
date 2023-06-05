#include "lists.h"

/**
* listint_len - a function that returns the number of
* elements in a linked lists
* @h: cons
* Return: 0
*/

size_t listint_len(const listint_t *h)
{
size_t t = 0;
while (h != NULL)
{
h = h->next;
t++;
}
return (t);
}