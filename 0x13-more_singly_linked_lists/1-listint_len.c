#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* listint_len - lenght of the linked list
* @h: pointer to node of the list
*
* Return: size_t indicated length
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *new = h;
	unsigned int i = 0;

	if (new == NULL)
		return (0);

	while (new != NULL)
	{
		new = new->next;
		i++;
	}

	return (i);
}
