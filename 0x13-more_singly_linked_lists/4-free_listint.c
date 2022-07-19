#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: head of linked list
 * Return: No return
 **/
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->n);
		free(current);
		current = nxt;
	}
}

