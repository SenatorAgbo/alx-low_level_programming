#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
