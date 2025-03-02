#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* leet - encodes a string into 1337 (leet) speak.
* @str: the string to be encoded.
* Return: the encoded string.
*/

char *leet(char *str)
{
int i, j;
char letters[] = {'a', 'e', 'o', 't', 'l'};
char leet[] = {'4', '3', '0', '7', '1'};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == letters[j] || str[i] == letters[j] - 32)
{
str[i] = leet[j];
break;
}
}
}
return (str);
}
