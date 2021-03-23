#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* *add_nodeint_end - function that adds a new node at the end of
* listint_t list.
* @head: pointer to head linked list
* @n: character to introduce in the list
*
* Return: linked list in order
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);

	new->n = n;

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
