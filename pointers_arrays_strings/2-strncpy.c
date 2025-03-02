#include <string.h>
#include "main.h"

/**
* _strncpy - function that copies a string.
* @dest: the buffer.
* @src: the string pointed.
* Return: the address of dest.
**/

char *_strncpy(char *dest, char *src, int n)
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
