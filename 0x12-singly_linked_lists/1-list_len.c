#include "lists.h"
/**
 * list_len - l
 * @h: parameter
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *store = NULL;

	store = h;
	while (store != NULL)
	{
		n++;
		store = store->next;
	}
	return (n);
}
