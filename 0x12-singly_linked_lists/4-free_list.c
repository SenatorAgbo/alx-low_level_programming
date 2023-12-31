#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *head = next;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
