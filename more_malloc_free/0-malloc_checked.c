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
void *ptr;
if (b == 0)
return (NULL);
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
else
{
return (ptr);
}
}
