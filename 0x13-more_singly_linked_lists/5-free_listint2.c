#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list.
* @head: pointer to print
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{

		while (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
}
