#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_listint - function that sum of differents characters of the list
* @head: pointer the first node of the list
*
* Return: sum of the characters.
*/

int sum_listint(listint_t *head)
{
	listint_t *new;
	int sum = 0;
	int tmp = 0;

	if (head == NULL)
		return (0);

	new = head;

	while (new != NULL)
	{
		tmp = new->n;
		sum = sum + tmp;
		new = new->next;
	}

	return (sum);

}
