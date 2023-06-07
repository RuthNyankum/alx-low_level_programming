#include "lists.h"

/**
* free_listint_safe - a function that frees a linked list
* @h: pointer
* Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int t;
listint_t *tmp;

if (!h || !*h)
return (0);
while (*h)
{
t = *h - (*h)->next;
if (t > 0)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}
