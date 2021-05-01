#include "lists.h"

/**
* get_dnodeint_at_index - fuction that return n'th of the node index
* @head: pointer to head of the linked_list
* @index: unsigend int correspond of the index of the node to return
*
* Return: pointer to node or NULL in case the node not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	tmp = head;
	while (tmp != NULL && i <= index)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
