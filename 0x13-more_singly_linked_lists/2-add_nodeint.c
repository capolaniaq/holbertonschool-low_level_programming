#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* *add_nodeint -  function that adds a new node at
* the beginning of a listint_t list.
* @head: pointer that first node
* @n: charracter to add in the node
*
* Return: the listint_t with de new order.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
