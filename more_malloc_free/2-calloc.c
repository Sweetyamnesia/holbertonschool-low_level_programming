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
int **arr = (int **)malloc(sizeof(int *) * nmemb);
unsigned int i = 0;
if (arr == NULL)
return (NULL);
for (i = 0; i < nmemb; i++)
{
arr[i] = (int *)malloc(sizeof(int));
if (arr [i] == NULL)
{
for (i = 0; i < nmemb; i++)
{
free(arr[i]);
}
free(arr);
return (NULL);
}
}
return (arr);
}
