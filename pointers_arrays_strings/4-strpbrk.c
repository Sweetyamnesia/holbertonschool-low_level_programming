#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: the pointer to the string.
* @accept: an other string.
* Return: the matches one of the byte or NULL if byte is not found.
**/

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return ((char *)s);
}
a++;
}
s++; 
}
return (NULL);
}
