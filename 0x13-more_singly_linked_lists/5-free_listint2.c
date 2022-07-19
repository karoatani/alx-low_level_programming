#include "lists.h"
/**
  * free_listint2- func
  * @head: parameter
  * Return: void
  **/
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head != NULL)
	{
		temp2 = *head;
		while ((temp = temp2) != NULL)
		{
			temp2 = temp2->next;
			free(temp);
		}
	}
}
