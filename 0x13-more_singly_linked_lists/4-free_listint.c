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
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
	else
	{
		free(head);
		return;
	}


}
