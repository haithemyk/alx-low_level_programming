#include "lists.h"
/**
 * add_node_end - will add node at the tail of list
 * @head:the head of list may be null!
 * @str:the string of struct list_t
 * Return:the pointer to the new tail of list
 */
void free_list(list_t *head)
{
	list_t *trav;
	trav = *head;
	while (trav->next != NULL)
	{
		trav = trav->next;
		free(*head);
		*head = trav;	
	}
	free(*head);
}
