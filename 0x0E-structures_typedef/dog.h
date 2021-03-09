#ifndef _FUNCTIONS_
#define _FUNCTIONS_

/**
* struct dog - description my dog
* @name: name dog char pointer
* @age: float
* @owner: char pointer
*
*
* Description: is the features for a do
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

/* function that initialize a variable of type struct dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);


/*function that prints a struct dog*/
void print_dog(struct dog *d);

#endif
