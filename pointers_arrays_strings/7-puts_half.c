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
int i = 0;
while (str[length] + 1 / 2)
{
length++;
}
for (i = 0; i < length; i++)
putchar(str[i]);
putchar('\n');
}
