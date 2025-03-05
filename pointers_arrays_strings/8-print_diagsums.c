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
int i;
for (i = 0; i < size; i++)
{
principal_diagonal += a[i * size + i];
secondary_diagonal += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", principal_diagonal, secondary_diagonal);
}
