#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - function that allocates memory for an array.
* @nmemb: the address of memory to print
* @size: the size of the memory to print
* Return: NULL if malloc fails and if nmemb or size equal zero.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *arr;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
return (NULL);
arr = (int *)malloc(nmemb * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
{
arr[i] = 0;
}
return (arr);
}
