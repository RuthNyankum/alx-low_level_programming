#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_calloc - a function that allocates memory for an array,
* using malloc
* @nmemb: unsigned int type
* @size: unsigned int type
* Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *t;
unsigned int snow;

if (nmemb == 0 || size == 0)
return (NULL);

t = malloc(nmemb * size);
if (t == NULL)
{
return (NULL);
}
snow = 0;
while (snow < nmemb * size)
{
t[snow] = 0;
snow++;
}
return (t);
}
