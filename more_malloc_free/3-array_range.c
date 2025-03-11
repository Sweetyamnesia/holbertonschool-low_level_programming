#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - function that creates an array of integers.
* @min: the minimum  value.
* @max: the maximum value.
* Return: NULL if malloc fails or if min > max.
*/

int *array_range(int min, int max)
{
int i = 0;
int *arr;
if (min > max)
return (NULL);
arr = malloc(sizeof(int) *  (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
{
arr[i] = min;
}
return (arr);
}
