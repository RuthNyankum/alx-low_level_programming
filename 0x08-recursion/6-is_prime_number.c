#include "main.h"

/**
* actual_prime - if a number is prime
* @t: number to evaluate
* @u: iterator
* Return: 1 if n is prime, 0 if not
*/

int actual_prime(int t, int u)
{
if (t == u)
return (1);
else if (t % u == 0)
return (0);
return (actual_prime(t, u + 1));
}

/**
* is_prime_number - if integer is a prime number or not
* @n: int
* Return: 1 if n is a prime number, 0 if not
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, 2));
}
