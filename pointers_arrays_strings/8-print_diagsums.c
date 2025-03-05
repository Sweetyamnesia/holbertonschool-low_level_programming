#include "main.h"
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of two diagonals of a square.
* @a: the pointer.
* @size : the size of the square.
**/

void print_diagsums(int *a, int size)
{
int principal_diagonal = 0, secondary_diagonal = 0;
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
principal_diagonal += a[i * size + j];
}
if ((i + j) == (size - 1))
{
secondary_diagonal += a[i * size + j];
}
}
}
putchar(principal_diagonal);
putchar(secondary_diagonal);
}
