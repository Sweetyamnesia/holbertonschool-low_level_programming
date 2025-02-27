#include <string.h>
#include "main.h"

/**
* print_rev - function that prints a string in reverse.
* @s: the parameter.
**/

void print_rev(char *s)
{
int length;
length = 0;
while (*s != '\0')
{
length++;
s++;
}
for (; length >= 0; length--)
{
s--;
_putchar(*s);
}
_putchar('\n');
}

