#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - function that frees dogs.
* @d: the pointer of the type struct dog.
* Return: NULL if width or height is negative or equal to 0.
*/

void free_dog(dog_t *d)
{
if (d == NULL)
return;
else
{
free(d->name);
free(d->owner);
free(d);
}
}
