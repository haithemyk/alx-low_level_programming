#include "lists.h"
/**
 * print_listint - will print the list from the head to tail
 * @h:list that will be loop through as argument
 * Return:the size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t size;
	const listint_t *ptr;

	ptr = h;
	size = 0;

	while (ptr != NULL)
	{
		printf("%i\n", ptr->n);
		ptr = ptr->next;
		size++;
	}
	return (size);

}
