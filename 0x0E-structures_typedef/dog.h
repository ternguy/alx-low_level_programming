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
void int_dog(struct dog *d, char *name, floate age, char *owner);
void print_dog(struct dog *d);
dog_t = *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int_strlen(char *strn);
char *_strcopy(char *dest, char *str);
