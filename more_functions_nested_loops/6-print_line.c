#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* print_line - prints a straight line.
* @n: the number of times the character _ should be printed.
**/

void print_line(int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (n == 0)
{
_putchar('_');
}
_putchar('_');
}
_putchar('\n');
}
