#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* _strdup - function that return pointer to a newly allocated space in memory.
* @str: the string to duplicate.
* Return: NULL if str is null or if there are insufficient memory.
*/

char *_strdup(char *str)
{
char *str2;
str2 = strdup(str);
if (str == NULL)
{
return (NULL);
}
else
{
return (str2);
}
free(str);
return (NULL);
}
