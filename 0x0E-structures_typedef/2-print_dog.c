#include <stdio.h>
#include "dog.h"

/**
* print_dog - function that prints a struct dog
* @d: pointer to the dog
*
*
* Return: void
*/


void print_dog(struct dog *d)
{

	if (d != 0)
	{

		if (d->name == 0)
			printf("Name: (nil)\n");
		else if (d->name != 0)
			printf("Name: %s\n", d->name);
		if (d->age == 0)
			printf("Age: (nil)\n");
		else if (d->age != 0)
			printf("Age: %.5f\n", d->age);
		if (d->owner == 0)
			printf("Owner: (nil)\n");
		else if (d->owner != 0)
			printf("Age: %s\n", d->owner);
	}
}
