#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - function that allocates memory.
* @b: the parameter.
* Return: a status value.
*/

void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b * sizeof(int));
if (ptr == NULL)
{
return (NULL);
}
else
{
return (ptr);
}
}
