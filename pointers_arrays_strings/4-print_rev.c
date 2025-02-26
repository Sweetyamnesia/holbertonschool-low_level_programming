#include <string.h>
#include "main.h"

/**
* print_rev - function that prints a string in reverse.
* @s: the parameter.
**/

void print_rev(char *s)
{
int len = strlen(s);
int i = 0;
while (len < 0)
{
s[i++] = s [len-- - 1];
s[i] = '\0';
}
_putchar('\n');
}
