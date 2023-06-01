#include <stdio.h>
#include "lists.h"

/**
* print_list - a function that prints all the elements
* @h: pointer
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
size_t t;

for (t = 0; h != NULL; t++)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
}
return (t);
}
