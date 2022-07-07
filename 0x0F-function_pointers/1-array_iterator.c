#include "function_pointers.h"
/**
 * array_iterator - itereate
 * @array: anarray
 * @size: size of integer
 * @action: function pointer
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
