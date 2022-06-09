#include "main.h"

/**
 * _isupper - Entry point
 *
 * @c : parameter
 *
 * Return: return 0 or 1
 * base on the condition
 */

int _isupper(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (0);
		else
			return (1);
	}
}
