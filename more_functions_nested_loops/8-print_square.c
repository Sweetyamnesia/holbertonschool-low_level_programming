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
for (n1 = 1; n1 <= size; n1++)
{
for (n2 = 1; n2 <= size; n2++)
{
_putchar('#');
}
_putchar('\n');
}
}
