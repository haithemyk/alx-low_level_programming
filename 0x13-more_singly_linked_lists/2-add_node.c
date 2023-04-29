#include "lists.h"
/**
 * add_node - will add node at the head of list
 * @head:the head of list may be null!
 * @str:the string of struct list_t
 * Return:the pointer to the new head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

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
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
