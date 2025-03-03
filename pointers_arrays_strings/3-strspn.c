#include <string.h>
#include "main.h"
#include <stdio.h>

/**
* _strspn - the function that gets the length of a prefix substring.
* @s: the pointer to the string.
* @accept: the bytes.
* Return: the number of bytes in initial segment.
**/

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
unsigned int i, j;
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
if (s[i] !=  accept[j])
{
return (length);
}
}
return (length);
}
