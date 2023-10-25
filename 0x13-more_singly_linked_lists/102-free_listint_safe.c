#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list and also a pointer.
 *
 * Return: does not return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp = *head;

	if (head != NULL)
	
	while (temp != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}
		*head = NULL;
	
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list and also a pointer.
 *
 * Return: size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nums;
	listp_t *hptr = NULL;
        listp_t *n, *a;

        nums = 0;
	while (*h != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)*h;
		n->next = hptr;
		hptr = n;

		a = hptr;

		while (a->next != NULL)
		{
			a = a->next;
			if (*h == a->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nums);
			}
		}

		*h = (*h)->next;
		free(*h);
		nums++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nums);
}
