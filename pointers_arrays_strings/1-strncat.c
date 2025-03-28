#include <string.h>
#include "main.h"

/**
* _strncat - function that concatenates two strings.
* @dest: first string.
* @src: second string.
* @n: parameter.
* Return: the address of dest.
**/

char *_strncat(char *dest, char *src, int n)
{
char *ret = dest;
while (*dest)
{
dest++;
}
while (n > 0 && *src)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (ret);
}
