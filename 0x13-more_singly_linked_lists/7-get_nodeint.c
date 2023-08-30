#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list
 * @index: index of the node
 *
 * Return: nth node . If node does not exist, returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	for (i = 0; i && temp < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL)
}