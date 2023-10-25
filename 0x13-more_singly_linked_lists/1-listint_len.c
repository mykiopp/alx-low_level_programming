#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: head of a list that is a of linked list.
 *
 * Return: numbers of nodes that are calculated.
 */
size_t listint_len(const listint_t *h)
{
	size_t nums = 0;

	while (h != NULL)
	{
		h = h->next;
		nums++;
	}
	return (nums);
}
