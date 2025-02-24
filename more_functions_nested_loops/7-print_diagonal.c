#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* print_diagonal - print diagonal line on the terminal.
* @n: the number of times the character \ should be printed.
**/

void print_diagonal(int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (n == 0)
{
_putchar('\\');
}
_putchar('\\');
}
_putchar('\n');
}
