#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: head of a list and also a pointer.
 *
 * Return: head node's data or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int nums;
	listint_t *temp;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	nums = curr->n;

	temp = curr->next;

	free(*head);

	*head = temp;

	return (nums);
}
