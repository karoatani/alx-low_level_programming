#include "lists.h"
/**
  * add_nodeint_end- add node to the end
  * @head: head
  * @n: n
  * Return: return
  **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = NULL;
	listint_t *new_node = NULL;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (new_node->n == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
