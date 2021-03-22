#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* *add_node_end - function that adds a new node at the end of a list_t list.
* @head: node to add
* @str: string for the add in the node
*
*
* Return: addres of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end = NULL;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	string = strdup(str);
	if (string == 0)
	{
		free(new);
		return (0);
	}

	new->str = string;
	new->len = _strlen(string);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	end = *head;
	while (end->next != NULL)
		end = end->next;
	end->next = new;

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
