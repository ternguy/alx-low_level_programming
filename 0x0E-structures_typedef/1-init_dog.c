#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a new type of data
 * representating a dog
 * @name: name of doggg
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
