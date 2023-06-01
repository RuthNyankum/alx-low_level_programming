#include <stdlib.h>
#include "lists.h"

/**
* free_list - a function that frees
* @head: list_t
*/

void free_list(list_t *head)
{
if (head == NULL)
return;
free_list(head->next);
free(head->str);
free(head);
}
