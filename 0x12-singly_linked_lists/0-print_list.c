#include "lists.h"
/**
 * print_list - print list of node
 * @h: parameter
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *store = NULL;

	store = h;
	while (store != NULL)
	{
		if (store->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d]", store->len);
			printf(" %s\n", store->str);
		}
		n++;
		store = store->next;
	}
	return (n);
}

