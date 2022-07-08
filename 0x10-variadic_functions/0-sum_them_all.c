#include "main.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sumation = 0;
	va_list sum;

	va_start(sum, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sumation += va_arg(sum, int);
	va_end(sum);
	return (sumation);
}
