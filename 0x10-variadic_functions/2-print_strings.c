#include "main.h"
/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list sep;
	int store = n - 1;

	va_start(sep, n);
	if (separator == NULL)
		printf("NULL Seperator");

	for (i = 0; i < n; i++)
	{
		if (i == store)
		{
			printf("%s", va_arg(sep, char*));
			break;
		}
		printf("%s %s", va_arg(sep, char*), separator);
	}
	printf("\n");
	va_end(sep);
}
