#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list and also a pointer.
 * @index: index of the node.
 *
 * Return: n node or, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}

	return (temp);
}
