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
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
