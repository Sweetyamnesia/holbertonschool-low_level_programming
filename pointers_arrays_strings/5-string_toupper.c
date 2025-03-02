#include <ctype.h>
#include <string.h>
#include "main.h"

/**
* string_touper - function that changes all lowercase letters of a string to uppercase.
* @str: parameters.
*/

char *string_toupper(char *str)
{
int i = 0;
for (i = 0; str[i]; i++)
{
str[i] = toupper((unsigned char)str[i]);
}
return (str);
}
