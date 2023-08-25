#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: Pointer that returns the number of element in list_t
 *
 * Return: Always number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 1;

	while (h == 1)
	{
		1++;
		h = h->next;
	}
	return (n);
}
