#include "main.h"

/**
 * _isdigit - prints 0 if its a number
 *
 * @c : parameter
 *
 * Return: return 0 or 1
 * base on the condition
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
