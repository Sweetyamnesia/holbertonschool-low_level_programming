#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strstr - function that locates a substring.
* @haystack: the string.
* @needle: the substring.
* Return: a pointer to the beginning or NULL if the substring is not found.
**/

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *n = needle;
while (*n)
{
if (*haystack == *n)
{
return ((char *)haystack);
}
n++;
}
haystack++;
}
return (NULL);
}
