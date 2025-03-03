#include "main.h"
#include <stdio.h>

/**
* _memcpy - function that copies memory area.
* @dest: the destination of memory.
* @n: number of bytes.
* @src: the source of memory.
* Return: show the result of s.
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
}
return (dest);
}
