#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - a function that adds a new node at the beginning
* @head: double pointer
* @str: string
* Return:  the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)

{
list_t *snow;
snow = malloc(sizeof(list_t));
if (snow == NULL)
{
return (NULL);
}
snow->str = strdup(str);
snow->len = strlen(str);
snow->next = *head;
*head = snow;
return (*head);
}
