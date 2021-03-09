#include "dog.h"
#include <stdlib.h>

/**
* *new_dog - function that creates a new dog
* @name: char
* @age: float
* @owner: char
* Return: newdog pointe
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	int i, j, l1;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; *(name + i) != '\0'; i++)
	newdog->name = malloc(i * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (l1 = 0; l1 <= i; l1++)
		newdog->name[l1] = name[l1];
	newdog->age = age;
	for (j = 0; *(owner + j) != '\0'; j++)
	newdog->owner = malloc(j * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (l1 = 0; l1 <= j; j++)
		newdog->owner[l1] = owner[l1];
	return (newdog);
}
