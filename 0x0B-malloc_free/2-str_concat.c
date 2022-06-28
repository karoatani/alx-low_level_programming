#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int count1 = 0;
	int count2 = 0;
	int i;
	int j;

	if (s1 == NULL | s2 == NULL)
	{
		s1 = " ";
	}
	while (*(s1 + count1) != '\0')
	{
		count1++;
	}
	while (*(s2 + count2) != '\0')
	{
		count2++;
	}

	ptr = malloc(sizeof(char) * (count1 + count2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < count1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= count2; j++)
	{
		ptr[count1] = s2[j];
		count1++;
	}
	return (ptr);
}
