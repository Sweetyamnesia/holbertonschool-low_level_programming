#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* print_square - prints a square.
* @size: it's the size of the square.
**/

void print_square(int size)
{
int n1, n2;
if (size <= 0)
{
_putchar('\n');
}
for (n1 = 0; n1 < size; n1++)
{
for (n2 = 0; n2 < size; n2++)
{
_putchar('#');
}
_putchar('\n');
}
}
