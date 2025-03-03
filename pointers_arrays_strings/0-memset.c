#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _memset - function that fills memory with a constant byte.
* @s: first parameter.
* @b: second parameter.
* @n : third parameter.
* Return: show the result of s.
**/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i++] = b;
}
return (s);
}
