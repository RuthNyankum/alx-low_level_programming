#include <stdlib.h>
#include "main.h"

/**
* count_word - count the number of words in a string
* @s: string
* Return: 0
*/

int count_word(char *s)
{
int flag, t, u;

flag = 0;
u = 0;

for (t = 0; s[t] != '\0'; t++)
{
if (s[t] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
u++;
}
}
return (u);
}

/**
* **strtow - a function that splits a string into words.
* @str: string
* Return: 0
*/

char **strtow(char *str)
{
char **matrix, *tmp;
int t, k = 0, len = 0, words, w = 0, start, end;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

for (t = 0; t <= len; t++)
{
if (str[t] == ' ' || str[t] == '\0')
{
if (w)
{
end = t;
tmp = (char *) malloc(sizeof(char) * (w + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - w;
k++;
w = 0;
}
}
else if (w++ == 0)
start = t;
}

matrix[k] = NULL;

return (matrix);
}
