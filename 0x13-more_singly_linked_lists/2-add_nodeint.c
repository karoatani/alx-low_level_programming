#include "lists.h"
/**
  * add_nodeint- add node
  * @head: head pointer
  * @n: constant integer n
  * Return: return new node
  **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
