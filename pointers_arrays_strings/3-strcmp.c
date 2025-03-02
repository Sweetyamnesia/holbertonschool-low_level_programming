#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strcmp - function that compares two strings.
* @s1: the first string.
* @s2: the second string.
* Return: difference between 
**/

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
