#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - the function that locates a character in a string.
* @s: the pointer to the string.
* @c: the character.
* Return: NULL if the character is not found.
**/

char *_strchr(char *s, char c)
{
while (*s && *s != (char)c)
{
s++;
}
if (*s == c)
{
return ((char *)s);
}
return (NULL);
}
