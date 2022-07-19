#include "lists.h"
/**
  * print_listint-print
  * @h: parameter
  * Return: number of node
  **/
size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		nodeCount++;
	}
	return (nodeCount);
}
