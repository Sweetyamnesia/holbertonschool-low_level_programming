#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - function that returns the length of a string.
* @s: the parameter.
* Return: the length.
**/


int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
