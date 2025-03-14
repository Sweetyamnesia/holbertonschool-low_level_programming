#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - the function that initialize a variable of type struct dog.
* @d: the pointer of the type struct dog.
* @name: the pointer of name of the dog.
* @age: the age of the dog.
* @owner: the pointer of owner of the dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
