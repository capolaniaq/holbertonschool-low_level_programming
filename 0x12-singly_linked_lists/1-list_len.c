#include "lists.h"

/**
* list_len - function that returns the number of elements in a linke
* d list_t list
* @h: pointer of the head
*
*
* Return: lenght o0f the list
*/


size_t list_len(const list_t *h)
{
	const list_t *node = h;
	unsigned int lenght = 0;

	if (node == NULL)
		return (0);


	while (node != NULL)
	{
		lenght++;
		node = node->next;
	}


	return (lenght);
}
