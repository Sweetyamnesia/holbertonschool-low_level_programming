#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size: size of the array.
 * @action: pointer to the function.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
putchar(size);
action(*array);
}


