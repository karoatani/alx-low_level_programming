#include "variadic_functions.h"
/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list sep;
	int store = n - 1;

	va_start(sep, n);
	if (separator == NULL)
		printf("NULL Seperator");
	for (i = 0; i < n; i++)
	{
		if (i == store)
		{
			printf("%d", va_arg(sep, int));
			break;
		}
		printf("%d %s", va_arg(sep, int), separator);
	}
	printf("\n");
	va_end(sep);
}
