#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	va_list fmt;
	int count = 0;
	char *s;

	va_start(fmt, format);
	while (format[count] != '\0')
	{
		switch (format[count])
		{
			case 'c':
				printf("%c", va_arg(fmt, int));
				break;
			case 'i':
				printf("%d", va_arg(fmt, int));
				break;
			case 'f':
				printf("%f", va_arg(fmt, double));
				break;
			case 's':
				s = va_arg(fmt, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				break;
			default:
				break;
		}
		count++;
		if (format[count])
		{
			printf(",");
		}
	}
	printf("\n");
	va_end(fmt);
}

