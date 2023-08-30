#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node of index of a linked list
 * @head: head of list
 * @index: index of the list where the node is deleted
 *
 * Return: 1 if successful, -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	if (*head == NULL)
		return (-1);

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
