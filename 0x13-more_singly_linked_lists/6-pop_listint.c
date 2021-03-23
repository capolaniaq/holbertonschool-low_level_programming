#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* pop_listint - function that delete the firts node
* @head: pointer to delete
*
* Return: integer in node to delete
*/

int pop_listint(listint_t **head)
{
	listint_t *delete = NULL;
	int i = 0;

	if (head == NULL)
		return (0);
	delete = *head;
	*head = delete->next;
	i = delete->n;
	free(delete);

	return (i);
}

