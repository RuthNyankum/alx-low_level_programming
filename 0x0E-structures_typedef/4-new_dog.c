#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name
* @age: age
* @owner: owner
* Return: 0
*/

dog_t *new_dog(char *name, float age, char *owner)
{
int t, u, v;
dog_t *p;

p = malloc(sizeof(dog_t));

if (p == NULL)
{
free(p);
return (NULL);
}
for (t = 0; name[t]; t++)
;
for (u = 0; owner[u]; u++)
;
p->name = malloc(t + 1);
p->owner = malloc(u + 1);

if (p->name == NULL || p->owner == NULL)
{
free(p->name), free(p->owner), free(p);
return (NULL);
}
for (v = 0; v < t; v++)
{
p->name[v] = name[v];
}
p->name[v] = '\0';
for (v = 0; v < u; v++)
{
p->owner[v] = owner[v];
}
p->owner[v] = '\0';
p->age = age;
return (p);
}
