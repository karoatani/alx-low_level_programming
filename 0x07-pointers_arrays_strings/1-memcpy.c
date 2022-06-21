#include "main.h"
/**
 * _memcpy - coppy
 *
 * @dest: parameter dest
 * @src: parameter src
 * @n: parameter n
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}
