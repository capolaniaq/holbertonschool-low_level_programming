#include "lists.h"

/**
* free_dlistint - function for to free leaks of memeory in double linked linst
* @head: pointer to indicate the head of linkedlist
*
* Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
