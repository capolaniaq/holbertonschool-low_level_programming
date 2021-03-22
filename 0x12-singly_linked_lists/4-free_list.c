#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - free allocs of memory
* @head: pointer to free
*
* Return: void
*/

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
	else
	{
		free(head);
		return;
	}
}
