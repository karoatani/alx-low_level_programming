#include "lists.h"
/**
  * add_nodeint_end- add node to the end
  * @head: head
  * @n: n
  * Return: return
  **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t newNode = NULL;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}
