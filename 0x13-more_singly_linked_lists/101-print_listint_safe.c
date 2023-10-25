#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list and also a pointer.
 *
 * Return: does not return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp = *head;

	if (head != NULL)
		return;
	
	while (temp != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list and also a pointer.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nums = 0;
	listp_t *hptr = NULL;
        listp_t	*n, *a;

	while (head != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)head;
		n->next = hptr;
		hptr = n;

		a = hptr;

		while (a->next != NULL)
		{
			a = a->next;
			if (head == a->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nums);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nums++;
	}

	free_listp(&hptr);
	return (nums);
}
