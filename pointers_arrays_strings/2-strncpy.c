#include <string.h>
#include "main.h"

/**
* _strncpy - function that copies a string.
* @dest: the buffer.
* @src: the string pointed.
* @n: parameter.
* Return: the address of dest.
**/

char *_strncpy(char *dest, char *src, int n)
{
char *ret = dest;
while (n > 0 && *src)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (ret);
}
