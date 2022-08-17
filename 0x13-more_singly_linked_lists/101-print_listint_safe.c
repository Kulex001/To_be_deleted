#include "lists.h"

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: pointer to listint_t structure
 * Return: number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
		return (nodes);
}
