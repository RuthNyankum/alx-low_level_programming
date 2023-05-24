#include "3-calc.h"

int op_add(int t, int u);
int op_sub(int t, int u);
int op_mul(int t, int u);
int op_div(int t, int u);
int op_mod(int t, int u);

/**
* op_add - the sum of two numbers.
* @t: number one
* @u: number two
* Return: The sum of t and u.
*/
int op_add(int t, int u)
{
return (t + u);
}

/**
* op_sub - the difference of two numbers.
* @t: number one
* @u: number two
* Return: The difference of t and u.
*/
int op_sub(int t, int u)
{
return (t - u);
}

/**
* op_mul - product of two numbers.
* @t: number one
* @u: number two
* Return: The product of t and u.
*/

int op_mul(int t, int u)
{
return (t * u);
}

/**
* op_div - division of two numbers.
* @t: number one
* @u: number two
* Return: The quotient of t and u.
*/

int op_div(int t, int u)
{
return (t / u);
}

/**
* op_mod - remainder of the division of two numbers.
* @t: number one
* @u: number two
* Return: remainder
*/

int op_mod(int t, int u)
{
return (t % u);
}
