#ifndef _LISTS_
#define _LISTS_
#include <stddef.h>
#include <stdio.h>
/**
 * struct list_t - structure
 * @str: structure member
 * @len: structure member
 * @next: structure member
 * Description: single linked list
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;
size_t print_list(const list_t *h);
#endif
