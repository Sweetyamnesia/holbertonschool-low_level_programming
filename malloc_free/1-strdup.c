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
int i = 0;
int j = 0;
int len1 = 0;
char *str2 = malloc(sizeof(char) * (len1 + 1));

if (str == NULL)
{
return (NULL);
}

while (str[len1])
{
len1++;
}

for (i = 0; i < j; i++)
str2[i] = str[i];

while (str[i] != '\0')
{
i++;
}

if (str2 == NULL)
{
return (NULL);
}

for (j = 0; j < i; j++)
str2[j] = str[j];
str2[i] = '\0';
return (str2);
}
