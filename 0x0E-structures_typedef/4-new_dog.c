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

	int i, j;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	i = 0;
	while (*(name + i) != '\0')
		i++;

	newdog->name = malloc(i * sizeof(char *) + 1);

	if (newdog->name == NULL)
	{
		free(newdog->name);
		return (NULL);
	}

	newdog->name = name;
	newdog->age = age;
	j = 0;
	while (*(owner + j) != '\0')
		j++;
	newdog->owner = malloc(j * sizeof(char *) + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		return (NULL);
	}
	newdog->owner = owner;
	return (newdog);
}
