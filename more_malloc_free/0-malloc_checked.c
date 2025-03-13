#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
* malloc_checked - function that allocates memory.
* @b: the parameter.
* Return: a status value.
*/

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b * sizeof(int));
if (ptr == NULL)
{
exit(98);
}
if (b == 0)
{
free(ptr);
return (NULL);
}
memset(ptr, 0, b * sizeof(int));
return (ptr);
}
