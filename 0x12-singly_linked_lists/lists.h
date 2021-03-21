#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

/**
* struct list - singly linked lists
* @str: string
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
*/

struct list
{
	char *str;
	unsigned int len;
	struct list *next;
};

typedef struct list list_t;


/*function that print the character*/
int _putchar (char c);

/*function that prints all the elements of a list_t list.*/
size_t print_list(const list_t *h);

/*function that returns the number of elements in a linked list_t list. */
size_t list_len(const list_t *h);

/* function that adds a new node at the beginning of a list_t list.*/
list_t *add_node(list_t **head, const char *str);

/*function that adds a new node at the end of a list_t list. */
list_t *add_node_end(list_t **head, const char *str);

/*function that frees a list_t list. */
void free_list(list_t *head);


#endif /*LIST_H_*/
