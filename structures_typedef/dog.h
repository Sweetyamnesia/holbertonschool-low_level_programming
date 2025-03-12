#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
* struct dog - is to define the dog.
* @name: the name of the dog.
* @age: the age of the dog.
* @owner: the owner of the dog.
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
* struct dog_t - new struct to define the dog.
* @name: the name of the dog.
* @age: the age of the dog.
* @owner: the owner of the dog.
*/
typedef struct dog_t
{
char *name;
float age;
char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
