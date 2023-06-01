#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - a function that adds a new node at the end 
* @head: double pointer
* @str: string
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *snow;
list_t *temp = *head;
unsigned int t = 0;

while (str[t])
t++;
snow = malloc(sizeof(list_t));
if (!snow)
return (NULL);

snow->str = strdup(str);
snow->len = t;
snow->next = NULL;

if (*head == NULL)
{
*head = snow;
return (snow);
}
while (temp->next)
temp = temp->next;
temp->next = snow;
return (snow);
}
