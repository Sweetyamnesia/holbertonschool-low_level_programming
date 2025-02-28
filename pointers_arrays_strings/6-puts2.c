#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 - function that print every other character of a string.
* @str: the parameter.
**/

void puts2(char *str)
{
int number = 1;
int i = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && number)
_putchar(str[i]);
number = 0;
}
if (str[i] == ' ')
number = 1;
}
