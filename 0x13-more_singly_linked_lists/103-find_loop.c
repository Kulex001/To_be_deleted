#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - A function that frees a list
 * @h: A pointer listint_t structure
 * Return: The size of the list that was free'd
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return(NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
