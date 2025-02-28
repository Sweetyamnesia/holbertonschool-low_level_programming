#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - function that reverse a string.
* @s: the parameter.
**/

void rev_string(char *s)
{
int length = 0;
int i = 0;
char *ptr = s;
while (*ptr != '\0')
{
length++;
ptr++;
}
s = ptr - length;
for (i = 0;  i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
