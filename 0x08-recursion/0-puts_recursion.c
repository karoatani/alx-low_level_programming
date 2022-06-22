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
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
