#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: head of a list and also acts as as pointer.
 *
 * Return: dose not return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while ((temp = *head) != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
