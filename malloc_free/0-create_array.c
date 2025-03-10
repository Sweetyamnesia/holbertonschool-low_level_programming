#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function that creates an array of char.
* @size: size of bytes
* @c: the specific char.
* Return: NULL if size = 0 or if it's fail.
*/

char *create_array(unsigned int size, char c)
{
char *arr = malloc(size * sizeof(char));
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}
*arr = c;
if (arr == NULL)
{
printf("Échec de l'allocation mémoire\n");
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}


