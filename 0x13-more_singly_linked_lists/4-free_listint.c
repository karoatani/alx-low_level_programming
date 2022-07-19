#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: head of linked list
 * Return: No return
 **/
void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		head = head->next;
		free(current);
	}
	free(head);
}

