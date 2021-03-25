#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*
*
*
*
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	delete = *head;

	if (index == 0)
	{
		*head = delete->next;
		free(delete);
		return (1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (delete == NULL && i < index)
				return (-1);
			else if (i == (index - 1))
			{
				free(delete);
				return (1);
			}
			*head = delete->next;
		}
	}
	return (-1);
}
