#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @h: pointer a head of the list
*
* Return: how many nodes
*/

size_t print_list(const list_t *h)
{
	const list_t *temporary = h;
	unsigned int i = 0;

	if (temporary == NULL)
		return (0);

	while (temporary != NULL)
	{
		if (temporary->str == NULL)
			printf("[0] (nil)\n");
		else
		{
		printf("[%d] %s\n", temporary->len, temporary->str);
		}

		temporary = temporary->next;
		i++;
	}

	return (i);
}
