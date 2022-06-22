#include "main.h"
/**
 * _puts_recursion - recurse
 *
 * @s: parameter s
 *
 * Return: no return
 */
void _puts_recursion(char *s)
{
	static int count;

	count = 0;

	if (*(s + count) != '\0')
	{
		_putchar(*(s + count));
		count++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
