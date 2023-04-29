#include "lists.h"
/**
 * list_len - will return the size of an list
 * @h:list that will be loop through as argument
 * Return:the size of list
 */
size_t list_len(const list_t *h)
{
	size_t size;
	const list_t *ptr;

	ptr = h;
	size = 0;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		size++;
	}
	return (size);

}
