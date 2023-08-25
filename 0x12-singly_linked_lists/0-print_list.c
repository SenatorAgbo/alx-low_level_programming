#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of singly linked list
 * @h: Pointer to the list_t list tO print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (i = 0; h->next)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
