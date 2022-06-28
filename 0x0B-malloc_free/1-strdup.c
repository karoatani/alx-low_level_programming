#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i;
	int count = 0;
	char *pstr;

	/* get how many element str has */
	while (*(str + count) != '\0')
	{
		count++;
	}
	/* allocate memmory for pstr */
	pstr = malloc(sizeof(char) * (count + 1));
	/* check if str has no value and memory allocation failed */
	if (str == NULL | pstr == NULL)
	{
		return (NULL);
	}
	/* copy variables from str to pstr */
	for (i = 0; i < count; i++)
	{
		pstr[i] = str[i];
	}
	return (pstr);
}
