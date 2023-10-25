#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list and also a pointer.
 *
 * Return: pointer to the first node in the list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n;
	listint_t *p;

	n = NULL;
	p = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
