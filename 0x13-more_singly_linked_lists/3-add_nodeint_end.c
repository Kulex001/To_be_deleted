#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a node at the end of a list
 * @head: list head
 * @n: int value to add to the list
 * Return: location of end of node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr2, *ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	ptr2 = *head;
	while (ptr2->next != NULL)
	{
		ptr2 = ptr2->next;
	}
	ptr2->next = ptr;
	return (ptr);
}
