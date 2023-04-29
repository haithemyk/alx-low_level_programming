#include "lists.h"
/**
 * add_node_end - will add node at the tail of list
 * @head:the head of list may be null!
 * @str:the string of struct list_t
 * Return:the pointer to the new tail of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *traversal;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;


	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	traversal = *head;
	while (traversal->next != NULL)
	{
		traversal = traversal->next;
	}
	traversal->next = ptr;
	return (ptr);
}
