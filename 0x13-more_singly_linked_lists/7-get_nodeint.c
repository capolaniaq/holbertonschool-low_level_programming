#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* *get_nodeint_at_index -  function ntn node of list.
* @head: pointer that first node
* @index: number of node
*
* Return: node of ntn
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = NULL;
	listint_t *aux = NULL;
	unsigned int i;

	if (head == NULL)
		return (0);

	new = head;
	for (i = 0; i <= index; i++)
	{
		if (i == index)
			aux = new;
		else if (new == NULL && i < index)
			return (NULL);
		new = new->next;

	}

	return (aux);
}
