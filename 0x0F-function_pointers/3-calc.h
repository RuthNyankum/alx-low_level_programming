#ifndef CALC_H
#define CALC_H
/**
* struct op - A struct op.
* @op: Te operator.
* @f: The associated function.
*/

typedef struct op
{
char *op;
int (*f)(int t, int u);
} op_t;

int op_add(int t, int u);
int op_sub(int t, int u);
int op_mul(int t, int u);
int op_div(int t, int u);
int op_mod(int t, int u);
int (*get_op_func(char *s))(int, int);

#endif
