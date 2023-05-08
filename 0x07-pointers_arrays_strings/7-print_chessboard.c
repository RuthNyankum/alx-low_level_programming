#include "main.h"
/**
* print_chessboard - a function that prints the chessboard.
* @a: array
* Return: 0
*/

void print_chessboard(char (*a)[8])
{
int t;
int u;

for (t = 0; t < 8; t++)
{
for (u = 0; u < 8; u++)
_putchar(a[t][u]);
_putchar('\n');
}
}
