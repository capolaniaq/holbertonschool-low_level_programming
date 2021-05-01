#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a dlistint_t list.
* @h: struct to pointer
*
* Return: number of nodes of the doublelinked_list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
