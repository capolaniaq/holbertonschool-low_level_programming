#include "lists.h"

/**
* add_dnodeint - function that insert new node in the begginign of the list
* @head: double pointer of the structure indicate the head of the list
* @n: integer of the value to save in new node
*
* Return: address of the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	tmp = *head;
	tmp->prev = new_node;
	new_node->next = tmp;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
