#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts_half - function that print half of a string.
* @str: the parameter.
**/

void puts_half(char *str)
{
int length = 0;
int i, start;
while (str[length] != '\0')
{
length++;
}
start = (length + 1) / 2;
for (i = start; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
