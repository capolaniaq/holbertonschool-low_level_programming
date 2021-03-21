#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* *add_node - function that adds a new node at the beginning of a list_t list.
* @head: node to add
* @str: string for the add in the node
*
*
* Return: addres of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (0);

	string = strdup(str);
	new->str = string;
	new->len = _strlen(string);
	new->next = *head;
	*head = new;

	return (new);
}

/**
* _strlen - function that indicate length of the char
* @str: char to the analice
*
* Return: lenght of the char
*/


int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
