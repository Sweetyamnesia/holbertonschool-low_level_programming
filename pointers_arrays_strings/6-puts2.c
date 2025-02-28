#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 - function that print every other character of a string.
* @str: the parameter.
**/

void puts2(char *str)
{
int length = 0;
int i = 1;
while (str[length] != '\0')
{
length++;
}
for (i = 0; i < length; i+=2)
putchar(str[i]);
putchar('\n');
}
