#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: the first string.
* @s2: the second string.
* @n: the number of bytes.
* Return: NULL on failure.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
unsigned int len1 = 0;
unsigned int len2 = 0;
char *result = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
{
len1++;
while (s2[len2] && len2 < n)
len2++;
}
result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (j = 0; j < len2; j++, i++)
{
result[i] = s2[j];
}
result[i] = '\0';
return (result);
}
