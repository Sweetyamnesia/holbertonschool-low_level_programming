#include <string.h>
#include <stdio.h>
#include "main.h"

/**
* _strcat - function that concatenates two strings.
* @dest: first string.
* @src: second string.
* Return: the address of dest.
**/

char *_strcat(char *dest, char *src)
{
char *ret = dest;
while (*dest)
{
dest++;
}
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ret);
}
