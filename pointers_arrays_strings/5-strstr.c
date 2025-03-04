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
char *h = haystack;
char *n = needle;
while (*n && *h && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return ((char *)haystack);
}
haystack++;
}
return (NULL);
}
