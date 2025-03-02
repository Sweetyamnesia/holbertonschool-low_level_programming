#include <string.h>
#include "main.h"

/**
* _strcpy - function that copies the string pointed to by src
* @dest: the buffer.
* @src: the string pointed.
* Return: the address of dest.
**/

char *_strcpy(char *dest, char *src)
{
char *ret = dest;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ret);
}
