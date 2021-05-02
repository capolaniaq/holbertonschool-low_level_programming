#include "lists.h"

/**
* delete_dnodeint_at_index - function that delete a node indicate
* in index variable
* @head: double pointer that indicate the head of the linked list
* @index: unsigned int indicated the index of the delete node
*
* Return: 1 in case success and -1 in case failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_delete, *tmp, *tmp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		node_delete = tmp, tmp = tmp->next;
		tmp->prev = NULL, *head = tmp;
		free(node_delete);
		return (1);
	}
	while (tmp != NULL && i <= index)
	{
		if (i == index)
		{
			node_delete = tmp, tmp2 = tmp->next;
			tmp = tmp->prev;
			if (tmp2 != NULL)
				tmp2->prev = tmp, tmp->next = tmp2;
			else
				tmp->next = NULL;
			node_delete->next = NULL, node_delete->prev = NULL;
			free(node_delete);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
