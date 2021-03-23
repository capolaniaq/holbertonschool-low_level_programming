#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* insert_nodeint_at_index - function that insert a node
* @head: pointer to firts node of the list
* @idx: index where is put the new node
* @n: character to input in the new node
*
* Return: new list with the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *tmp = NULL;
	listint_t *tmp2 = NULL;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	new->n = n;
	tmp = *head;
	for (i = 0; i <= idx; i++)
	{
		if (i == (idx - 1))
		{
			tmp2 = tmp;
			tmp = tmp->next;
			tmp2->next = new;
			new->next = tmp;
		}
		else if (tmp == NULL && i < idx)
			return (NULL);
		tmp = tmp->next;
	}

	return (tmp);

}
