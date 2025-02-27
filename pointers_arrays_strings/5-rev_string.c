#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - function that reverse a string.
* @s: the parameter.
**/

void rev_string(char *s)
{
{
int length;
length = 0;
while (*s != '\0')
{
length++;
s++;
}
length--;
for (; length >= 0; length--)
{
s--;
}
}
}
