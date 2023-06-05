#include "lists.h"

/**
* print_listint - a function that prints all the elements
* @h: cons
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t t = 0;
while (h)
{
printf("%d\n", h->n);
t++;
h = h->next;
}
return (t);
}
