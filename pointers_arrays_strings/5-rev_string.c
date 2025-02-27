#include <string.h>
#include <stdio.h>
#include "main.h"

/**
* rev_string - function that reverse a string.
* @s: the parameter.
**/

void rev_string(char *s)
{
int l, i;
char *begin_ptr, *end_ptr, ch;
l = strlen(s);
begin_ptr = s;
end_ptr = s + l - 1;
for (i = 0; i < l / 2; i++)
{
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;
begin_ptr++;
end_ptr--;
}
}
