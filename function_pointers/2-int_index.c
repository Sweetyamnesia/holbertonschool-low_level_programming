#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array.
 * @size: number of elements in the array.
 * @cmp: pointer to the function which used to compare values.
 * Return: -1 if no elements matches or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
	return (i);
}
return (-1);
}
