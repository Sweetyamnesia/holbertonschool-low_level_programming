#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strchr - the function that locates a character in a string. 
* @s: the string.
* @c: the character. 
**/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (NULL);
}
