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
int length = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
length++;
break;
}
}
if (s[i] != accept[j])
{
return ((char *)s);
}
}
return (NULL);
}
