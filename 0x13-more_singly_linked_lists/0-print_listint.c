#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint - function that print the linked list
* @h: node in the head
*
* Return: how many node have
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *new;
	unsigned int i = 0;

	new = h;

	if (!new)
		return (0);

	while (new != NULL)
	{
		printf("%d\n", new->n);
		new = new->next;
		i++;
	}

	return (i);
}

