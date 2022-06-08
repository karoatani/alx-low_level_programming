#include "main.h"

/**
 * _islower  - shows 1 if the input
 * is a lower case unless otherwise
 * @c : The character in ascii code
 *
 * Return: return 0 or 1 base on condition
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
