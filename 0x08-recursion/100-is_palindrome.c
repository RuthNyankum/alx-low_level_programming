#include "main.h"

/**
* palin_b - obtains length
* @t: string
* @u: int
* Return: 1 if a string is a palindrome and 0 if not.
*/

int palin_b(char *t, int u)
{
if (*t == 0)
return (u - 1);
return (palin_b(t + 1, u + 1));
}

/**
* palin_c - compares string
* @t: string
* @u: length
* Return: 1 if a string is a palindrome and 0 if not.
*/

int palin_c(char *t, int u)
{
if (*t != *(t + u))
return (0);
else if (*t == 0)
return (1);
return (palin_c(t + 1, u - 2));
}

/**
* is_palindrome - a function that returns 1 if a string is a p
* alindrome and 0 if not.
* @s: string
* Return: 1 if a string is a palindrome and 0 if not.
*/

int is_palindrome(char *s)
{
int u;

u = palin_b(s, 0);
return (palin_c(s, u));
}
