#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* print_diagonal - print diagonal line on the terminal.
* @n: the number of times the character \ should be printed.
**/

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
