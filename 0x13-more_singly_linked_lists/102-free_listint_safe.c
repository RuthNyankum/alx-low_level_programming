#include "lists.h"

/**
* free_listint_safe -  a function that frees a linked list
* @h: pointer
* Return: number of elements in the freed list
*/

size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *tmp;
if (!h || !*h)
return (0);
while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
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
