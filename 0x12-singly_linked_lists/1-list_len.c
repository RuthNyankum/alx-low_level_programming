#include <stdlib.h>
#include "lists.h"

/**
* list_len - a function that returns the number of elements
* @h: pointer
* Return: 0
*/

size_t list_len(const list_t *h)
{
size_t t = 0;

while (h)
{
t++;
h = h->next;
}
return (t);
}
