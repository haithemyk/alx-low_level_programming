#include "lists.h"
/**
 * free_list - will free all nodes
 * @head:the head of list may be null!
 */
void free_list(list_t *head)
{
	list_t *trav;
	trav = head;

	while (trav->next != NULL)
	{
		trav = trav->next;
		free(head->str);
		head->str = NULL;
		free(head);
		head = NULL;
		head = trav;
	}
	free(head->str);
	head->str = NULL;
	free(head);
	head = NULL;

}
