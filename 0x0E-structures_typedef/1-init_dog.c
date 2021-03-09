#include <stdio.h>
#include "dog.h"

/**
* init_dog - funtions that struct with pointers
* @d: pointer to the struct dog
* @name: char
* @age: float
* @owner: char
* Return: void
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
