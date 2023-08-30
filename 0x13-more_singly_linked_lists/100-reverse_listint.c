#include "lists.h"

/**
 * reverse_listint - function to reserve a linked list
 * @head: points to first node in list
 *
 * Return: return the first node in list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
