#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings.
* @s1: the first string.
* @s2: the second string.
* Return: NULL on failure.
*/

char *str_concat(char *s1, char *s2)
{
int i = 0;
int j = 0;
int len1 = 0;
int len2 = 0;
char *result = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] || s2[len2])
{
if (s1[len1])
len1++;
if (s2[len2])
len2++;
}
result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
{
return (NULL);
}
while (s1[i])
{
result[i] = s1[i];
i++;
}
while (s2[j])
{
result[i] = s2[j];
i++;
j++;
}
result[i] = '\0';
return (result);
}
