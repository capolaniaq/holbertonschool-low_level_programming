#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* delete_nodeint_at_index - delete node in the index position
* @head: pointer to head list
* @index: position of the node to delete
*
* Return: 1 in case success or -1 in case not success
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node_previous, *node_delete;
	listint_t *node_next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (tmp == NULL && i < index)
				return (-1);
			else if (i == (index - 1))
			{	node_previous = tmp;
				tmp = tmp->next;
				node_delete = tmp;
				tmp = tmp->next;
				node_next = tmp;
				free(node_delete);
				node_previous->next = node_next;
				return (1);
			}
			tmp = tmp->next;
		}
	}
	return (-1);
}
