#include "lists.h"
/**
  * free_listint2- func
  * @head: parameter
  * Return: void
  **/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *nxt;

	current = *head;
	head = NULL;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->n);
		free(current);
		current = nxt;
	}
}
