#include "main.h"
#include <stdio.h>

/*
_puts_recursion : function that prints a string.
@s: the pointer
*/

void _puts_recursion(char *s)
{
    int i = 0;
    char s;
    
    for (i = 0; i < s; i++)
    {
        _putchar(s);
    }
    _putchar('\n');
}
