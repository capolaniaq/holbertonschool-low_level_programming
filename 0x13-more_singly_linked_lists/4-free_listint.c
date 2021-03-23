#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint - function that frees a listint_t list.
* @head: pointer to print
*
* Return: void
*/


void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}


}
