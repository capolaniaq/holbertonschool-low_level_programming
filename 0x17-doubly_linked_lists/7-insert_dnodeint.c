#include "lists.h"

/**
* insert_dnodeint_at_index - function that insert to node in a index correspond
* @h: double pointer to head of the linked list
* @idx: unsigned int to corresponde to index to insert the node
* @n: integer to save in the new node
*
* Return: address to the new node, or NULL in case to failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp1, *tmp2, *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	tmp1 = *h;
	if (idx == 0)
	{
		tmp1->prev = new_node, new_node->prev = NULL;
		new_node->next = tmp1, *h = new_node;
		return (new_node);
	}
	while (tmp1 != NULL && i <= idx)
	{
		if (i == idx)
		{
			tmp2 = tmp1->next;
			tmp1->next = new_node;
			new_node->next = tmp2;
			if (tmp2 != NULL)
				tmp2->prev = new_node;
			new_node->prev = tmp1;
			return (new_node);
		}
		tmp1 = tmp1->next;
		i++;
	}
	return (NULL);
}
