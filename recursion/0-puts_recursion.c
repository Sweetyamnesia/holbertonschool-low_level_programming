#include "main.h"
#include <stdio.h>

/*
_puts_recursion : function that prints a string.
@s: the string
*/

void _puts_recursion(char *s)
{
while (*s != '\0')
{
putchar(*s);
s++;
}
}