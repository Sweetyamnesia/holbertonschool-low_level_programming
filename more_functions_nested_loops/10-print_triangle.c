#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* print_triangle  - prints triangle with symbol #.
* @size: the size of the triangle.
**/

void print_triangle(int size)
{
int n1, n2, n3;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (n1 = 0; n1 < size; n1++)
{
for (n2 = size - n1; n2 > 1; n2--)
{
_putchar(' ');
}
for (n3 = 0; n3 <= n1; n3++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
