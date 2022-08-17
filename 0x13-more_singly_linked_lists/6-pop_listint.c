#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - remove first node of a list
 * @head: first node of the linked list
 * Return: int value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);
	ptr = *head;
	n = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (n);
}
