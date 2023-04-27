#include "lists.h"
/**
 * print_list - will print the list from the head to tail
 * @h:list that will be loop through as argument
 * Return:the size of list
 */
size_t print_list(const list_t *h)
{
	size_t size;
	const list_t *ptr;

	ptr = h;
	size = 0;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (Nil)\n");
		else
			printf("[%i] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
		size++;
	}
	return (size);

}
