#include "lists.h"

/**
* dlistint_len - function that prints all the elements of a dlistint_t list.
* @h: struct to pointer
*
* Return: number of nodes of the doublelinked_list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
