#include "lists.h"

/**
 * find_listint_loop - finds the loop in a list.
 * @head: head of a list and also a pointer.
 *
 * Return: pointer of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n = head;
	listint_t *p = head;

	while (head && n && n->next)
	{
		head = head->next;
		n = n->next->next;

		if (head == n)
		{
			head = p;
			p =  n;
			while (1)
			{
				n = p;
				while (n->next != head && n->next != p)
				{
					n = n->next;
				}
				if (n->next == head)
					break;

				head = head->next;
			}
			return (n->next);
		}
	}

	return (NULL);
}
