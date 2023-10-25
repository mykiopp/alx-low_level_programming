#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: head of a list and also a linked list.
 *
 * Return: resulting sum of all.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
