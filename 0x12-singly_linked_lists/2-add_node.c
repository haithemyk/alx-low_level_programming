#include "lists.h"
/**
 * print_list - will print the list from the head to tail
 * @h:list that will be loop through as argument
 * Return:the size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr, *traversal;
	ptr = malloc(sizeof(list_t));
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
