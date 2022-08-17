#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: number of element in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
