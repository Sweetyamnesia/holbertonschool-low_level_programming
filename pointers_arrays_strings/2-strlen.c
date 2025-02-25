#include <string.h>
#include <stdio.h>
#include "main.h"

/**
* _strlen - function that returns the length of a string.
* @s: the parameter.
* Return: 0 is a success.
**/

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
