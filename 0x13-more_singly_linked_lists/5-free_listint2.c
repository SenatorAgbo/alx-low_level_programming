#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 *
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	int_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
