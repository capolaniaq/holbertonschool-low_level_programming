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

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = name;

	newdog->owner = owner;

	newdog->age = age;

	return (newdog);

}
