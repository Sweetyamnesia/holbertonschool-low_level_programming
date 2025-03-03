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
int length = 0;
int i = *accept;
if (i < 2)
{
return (1);
}
while (s[i] != '\0')
{
if (s[i] == s[length])
{
++length;
++i;
}
else if (length == 0)
{
++i;
}
else
{
--length;
}
}
return (length);
}
