#include "main.h"

/**
  * print_most_numbers - print numbers
  *
  * Return: no return value
  */

void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch == 50 && ch == 52)
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}
