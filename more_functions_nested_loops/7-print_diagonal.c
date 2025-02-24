#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* print_diagonal - print diagonal line on the terminal.
* @n: the number of times the character \ should be printed.
**/

void print_diagonal(int n)
{
int i;
if (n <= 0)
{
for (i = 0; i < n; i++)
{
_putchar(' ');
}
_putchar(92);
}
_putchar('\n');
}
