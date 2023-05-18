#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_realloc - a function that reallocates a memory block using
* malloc and free
* @ptr: pointer
* @old_size: unsigned int
* @new_size: unsigned int
*/ Return: 0

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

char *t;

if (new_size > old_size)
{
t = malloc(new_size);
free(ptr);
return (t);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
t = malloc(new_size);
free(ptr);
return (t);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
return (ptr);
}
