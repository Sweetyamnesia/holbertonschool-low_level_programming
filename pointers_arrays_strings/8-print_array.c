#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_array - function that print n elements of an array of integers.
* @a: the first parameter.
* @n: the second parameter.
**/

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i += 1)
{
printf("%d", a[i]);
}
if (i < n - 1)
{
printf(", ");
}
printf("\n");
}
