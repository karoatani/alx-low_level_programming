#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: head of linked list
 * Return: No return
 **/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head->next);
		head = head->next;
	}
}

