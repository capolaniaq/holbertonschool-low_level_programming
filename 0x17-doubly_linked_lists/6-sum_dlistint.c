#include "lists.h"

/**
* sum_dlistint - function that sum of the n of the nodes in linked list
* @head: struct to pointer
*
* Return: sum of the n in the node of the linked_list, 0 if the linked\
* list in avoid
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
