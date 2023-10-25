#include "lists.h"

/**
 * print_listint - prints all the elements of a list taht are linked.
 * @h: head of a list that are a linked type.
 *
 * Return: numbers of node that are calculated.
 */
size_t print_listint(const listint_t *h)
{
	size_t nums = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nums++;
	}
	return (nums);
}
