#include "lists.h"
/**
  * listint_len- Function
  * @h: parameter
  * Return: return size_t
  */
size_t listint_len(const listint_t *h)
{
	size_t nodeCount = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		nodeCount++;
	}
	return (nodeCount);
}
